#include "ad5941.h"

#include <device.h>
#include <drivers/spi.h>

#include <sys/printk.h>
#include <errno.h>

#define AD5941_NODE   DT_NODELABEL(ad5941)
#define SPI_BUS       DT_LABEL(DT_BUS(AD5941_NODE))

static const struct device *spi_dev;  //每个驱动第一步都是定义device
static const struct spi_cs_control *spi_cs = SPI_CS_CONTROL_PTR_DT(AD5941_NODE, 0);
static struct spi_config spi_config;  //这个结构体中定义了spi的一些模式设定


/** Init SPI设置 for AD5941 */
int AD5941_init(void)
{
  spi_dev = device_get_binding(SPI_BUS);
  if (spi_dev == NULL) {
    printk("Cannot find SPI device %s!\n", SPI_BUS);
    return -ENODEV;
  }
        
  spi_config.frequency = DT_PROP(AD5941_NODE, spi_max_frequency);
  spi_config.operation = SPI_WORD_SET(8);     //spi_config结构体在这里配置(CPOL这种),主要在operation
  spi_config.cs = spi_cs;

  printk("AD5941 CS Pin: GPIO %s, pin %d.\n", spi_cs->gpio_dev->name, spi_cs->gpio_pin);

  return 0;
}


    //spi一般一次传输8位数据(1字节)
//AD5941有16位寄存器(如芯片id寄存器)，也有32位寄存器，读写寄存器的时候要考虑，所以有numHalword方便操作
//page96写了SPI读寄存器的步骤,需要目标地址addr(要读写寄存器的地址)，data保存读过来的数据
int AD5941_readRegister(uint16_t addr, uint32_t *data, int numHalfword)
{
  int err;
  uint8_t txdata[4] = {0};  //数组元素是uint8_t，用于保存数据
  uint8_t rxdata[6] = {0};
  //注意一点：rxdata是6个元素。因为spi传输的时候，rx和tx是两根线,同时进行。故最开始rx会接收到2个空字节
  //所以rx数组要比tx大2，之后进行运算的时候直接从rxdata[2]开始.之前的是空数据。

  struct spi_buf txbuf = {.buf = txdata, .len = 3};
  struct spi_buf_set txbufs = {.buffers = &txbuf, .count = 1};    //结构体txbufs中保存数据在数组指针txbuf
  struct spi_buf rxbuf = {.buf = rxdata, .len = (numHalfword == 2) ? 6 : 4};
  struct spi_buf_set rxbufs = {.buffers = &rxbuf, .count = 1};
  //上面四行结构体定义是 spi进行数据传输的缓冲嵌套。txbufs最底层是数组txdata

  //把寄存器的地址放到了txdata中，手册page96说了要发送寄存器地址
  txdata[0] = AD5941_SPICMD_SETADDR;
  txdata[1] = addr >> 8;  //写高八位到[1](txdata是uint8_t)。addr右移八位之后addr本身不变！！右移后高八位放在了低八位,赋给txdata[1]
  txdata[2] = addr & 0xff;  //0xff是1111 1111,和addr相与的结果给[2],就是把addr低八位赋给txdata[2]
  //注意：addr>>8之后addr本身数值不变。但addr=addr>>8时，addr的数值才会变化

  err = spi_write(spi_dev, &spi_config, &txbufs); //spi写txbufs中数据,spi_config是spi的配置
          //txbufs结构体包含txbuf结构体，而txbuf结构体包含数组txdata

  if (err) {
    printk("AD5941_readRegister - SETADDR: SPI write failed (err %d)\n", err);
    return err;
  }

  txdata[0] = AD5941_SPICMD_READREG;  
  txbuf.len = 2 + ((numHalfword == 2) ? 4 : 2);   //这里针对16位或者32位寄存器进行不同配置
//SPI总线上发送一个虚拟字节以启动读操作，并且读取返回的数据在txbuf中
  err = spi_transceive(spi_dev, &spi_config, &txbufs, &rxbufs); //spi_transceive是先发再收
  if (err) {
    printk("AD5941_readRegister - READREG: SPI transceive failed (err %d)\n", err);
    return err;
  }
  
    //读16位或者32位的数据
  if (numHalfword == 1) {
    *data = (rxdata[2] << 8) | rxdata[3];
  } else {
    *data = (rxdata[2] << 24) | (rxdata[3] << 16) | (rxdata[4] << 8) | rxdata[5];
  }

  return 0;
}





//SPI发送的数组长度一定要严谨，不能多不能少，发送&txbufs会把对应数组规定的len都发过去(如果有些不该发,但只要在数组对应长度中，就会被发送出去)
int AD5941_writeRegister(uint16_t addr, uint32_t *data, int numHalfword)
{  
  int err;
  uint8_t txdata[5] = {0};

  struct spi_buf txbuf = {.buf = txdata, .len = 3};   //这里的长度一定要严格吻合
  struct spi_buf_set txbufs = {.buffers = &txbuf, .count = 1};
    //结构体txbufs中保存数据在数组指针txbuf

  txdata[0] = AD5941_SPICMD_SETADDR;
  txdata[1] = addr >> 8;        //往0x2128地址写，手册上规定，要写入的寄存器地址格式为16位！！
  txdata[2] = addr & 0xff;   
  err = spi_write(spi_dev, &spi_config, &txbufs);
  if (err) {
    printk("AD5941_writeRegister - SETADDR: SPI write failed (err %d)\n", err);
    return err;
  }

  txdata[0] = AD5941_SPICMD_WRITEREG;   // 0x2d
  txdata[1] = *data >> 24;       // 00 00 00 01
  txdata[2] = *data >> 16; 
  txdata[3] = *data >> 8; 
  txdata[4] = *data & 0xff;   // &在这里是与
  txbuf.len = 2 + ((numHalfword == 2) ? 4 : 2);   //注意三目运算符的优先级！！

  err = spi_write(spi_dev, &spi_config, &txbufs);
  if (err) {
    printk("AD5941_writeRegister - WRITEREG: SPI write failed (err %d)\n", err);
    return err;
  }

  return 0;
}






/****************************************************************************/
/****************************************************************************/
// 上面两个函数有小问题，最终修改后的版本如下，去掉了numHalfword，可以读写32位或者16位的数据
/****************************************************************************/
/****************************************************************************/

int AD5941_readRegisterSYT(uint16_t addr, uint32_t *data)
{
  int err;
  int numHalfword = 0;

  if(((addr >= 0x1000) && (addr <= 0x3014)))      /// syt修改spi读写寄存器
    numHalfword = 2;
  else
    numHalfword = 1;

  uint8_t txdata[4] = {0};  //数组元素是uint8_t，用于保存数据
  uint8_t rxdata[6] = {0};
  //注意一点：rxdata是6个元素。因为spi传输的时候，rx和tx是两根线,同时进行。故最开始rx会接收到2个空字节
  //所以rx数组要比tx大2，之后进行运算的时候直接从rxdata[2]开始.之前的是空数据。

  struct spi_buf txbuf = {.buf = txdata, .len = 3};
  struct spi_buf_set txbufs = {.buffers = &txbuf, .count = 1};    //结构体txbufs中保存数据在数组指针txbuf
  struct spi_buf rxbuf = {.buf = rxdata, .len = (numHalfword == 2) ? 6 : 4};
  struct spi_buf_set rxbufs = {.buffers = &rxbuf, .count = 1};
  //上面四行结构体定义是 spi进行数据传输的缓冲嵌套。txbufs最底层是数组txdata

  //把寄存器的地址放到了txdata中，手册page96说了要发送寄存器地址
  txdata[0] = AD5941_SPICMD_SETADDR;
  txdata[1] = addr >> 8;  //写高八位到[1](txdata是uint8_t)。addr右移八位之后addr本身不变！！右移后高八位放在了低八位,赋给txdata[1]
  txdata[2] = addr & 0xff;  //0xff是1111 1111,和addr相与的结果给[2],就是把addr低八位赋给txdata[2]
  //注意：addr>>8之后addr本身数值不变。但addr=addr>>8时，addr的数值才会变化

  err = spi_write(spi_dev, &spi_config, &txbufs); //spi写txbufs中数据,spi_config是spi的配置
          //txbufs结构体包含txbuf结构体，而txbuf结构体包含数组txdata

  if (err) {
    printk("AD5941_readRegister - SETADDR: SPI write failed (err %d)\n", err);
    return err;
  }

  txdata[0] = AD5941_SPICMD_READREG;  
  txbuf.len = 2 + ((numHalfword == 2) ? 4 : 2);   //这里针对16位或者32位寄存器进行不同配置, 注意三目运算符的优先级！！
//SPI总线上发送一个虚拟字节以启动读操作，并且读取返回的数据在txbuf中
  err = spi_transceive(spi_dev, &spi_config, &txbufs, &rxbufs); //spi_transceive是先发再收
  if (err) {
    printk("AD5941_readRegister - READREG: SPI transceive failed (err %d)\n", err);
    return err;
  }
  
    //读16位或者32位的数据
  if (numHalfword == 1) {
    *data = (rxdata[2] << 8) | rxdata[3];
  } else {
    *data = (rxdata[2] << 24) | (rxdata[3] << 16) | (rxdata[4] << 8) | rxdata[5];
  }

  return 0;
}


//SPI发送的数组长度一定要严谨，不能多不能少，发送&txbufs会把对应数组规定的len都发过去(如果有些不该发,但只要在数组对应长度中，就会被发送出去)
int AD5941_writeRegisterSYT(uint16_t addr, uint32_t data)
{  
  int err;
  int numHalfword = 0;
  uint8_t txdata[5] = {0};

  if(((addr >= 0x1000) && (addr <= 0x3014)))      /// syt修改spi读写寄存器
    numHalfword = 2;
  else
    numHalfword = 1;

  struct spi_buf txbuf = {.buf = txdata, .len = 3};   //这里的长度一定要严格吻合
  struct spi_buf_set txbufs = {.buffers = &txbuf, .count = 1};
    //结构体txbufs中保存数据在数组指针txbuf

  txdata[0] = AD5941_SPICMD_SETADDR;
  txdata[1] = addr >> 8;        //往0x2128地址写，手册上规定，要写入的寄存器地址格式为16位！！
  txdata[2] = addr & 0xff;   
  err = spi_write(spi_dev, &spi_config, &txbufs);
  if (err) {
    printk("AD5941_writeRegister - SETADDR: SPI write failed (err %d)\n", err);
    return err;
  }

  if(numHalfword != 1)    // 32位data
  {
    txdata[0] = AD5941_SPICMD_WRITEREG;   // 0x2d
    txdata[1] = data >> 24;       // 00 00 00 01
    txdata[2] = data >> 16; 
    txdata[3] = data >> 8; 
    txdata[4] = data & 0xff;   // &在这里是与
    txbuf.len = 5;
  }
  else      // 16位data的len
  {
    txdata[0] = AD5941_SPICMD_WRITEREG;   
    txdata[1] = data >> 8;       
    txdata[2] = data & 0xff; 
    txbuf.len = 3;
  }

  err = spi_write(spi_dev, &spi_config, &txbufs);
  if (err) {
    printk("AD5941_writeRegister - WRITEREG: SPI write failed (err %d)\n", err);
    return err;
  }

  return 0;
}

/* 把spi读写寄存器封装，内部实现函数和原理还是基于冯工的akdemo  */ 
void AD5940_WriteReg(uint16_t RegAddr, uint32_t RegData)  
{
    AD5941_writeRegisterSYT(RegAddr, RegData);
}

uint32_t AD5940_ReadReg(uint16_t RegAddr)
{   
    uint32_t data;
    AD5941_readRegisterSYT(RegAddr, &data);
    return data;
}