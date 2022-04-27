#include "ad5941.h"

#include <device.h>
#include <drivers/spi.h>

#include <sys/printk.h>
#include <errno.h>


#define AD5941_NODE   DT_NODELABEL(ad5941)
#define SPI_BUS       DT_LABEL(DT_BUS(AD5941_NODE))

static const struct device *spi_dev;
static const struct spi_cs_control *spi_cs = SPI_CS_CONTROL_PTR_DT(AD5941_NODE, 0);
static struct spi_config spi_config;


/** Init SPI for ADPD4100 */
int AD5941_init(void)
{
  spi_dev = device_get_binding(SPI_BUS);
  if (spi_dev == NULL) {
    printk("Cannot find SPI device %s!\n", SPI_BUS);
    return -ENODEV;
  }

  spi_config.frequency = DT_PROP(AD5941_NODE, spi_max_frequency);
  spi_config.operation = SPI_WORD_SET(8);
  spi_config.cs = spi_cs;

  printk("AD5941 CS Pin: GPIO %s, pin %d.\n", spi_cs->gpio_dev->name, spi_cs->gpio_pin);

  return 0;
}

/** Read device register. */
int AD5941_readRegister(uint16_t addr, uint32_t *data, int numHalfword)
{
  int err;
  uint8_t txdata[4] = {0};
  uint8_t rxdata[6] = {0};

  struct spi_buf txbuf = {.buf = txdata, .len = 3};
  struct spi_buf_set txbufs = {.buffers = &txbuf, .count = 1};
  struct spi_buf rxbuf = {.buf = rxdata, .len = (numHalfword == 2) ? 6 : 4};
  struct spi_buf_set rxbufs = {.buffers = &rxbuf, .count = 1};

  txdata[0] = AD5941_SPICMD_SETADDR;
  txdata[1] = addr >> 8;
  txdata[2] = addr & 0xff;
  err = spi_write(spi_dev, &spi_config, &txbufs);
  if (err) {
    printk("AD5941_readRegister - SETADDR: SPI write failed (err %d)\n", err);
    return err;
  }

  txdata[0] = AD5941_SPICMD_READREG;
  txbuf.len = 2 + (numHalfword == 2) ? 4 : 2;
  err = spi_transceive(spi_dev, &spi_config, &txbufs, &rxbufs);
  if (err) {
    printk("AD5941_readRegister - READREG: SPI transceive failed (err %d)\n", err);
    return err;
  }
  
  if (numHalfword == 1) {
    *data = (rxdata[2] << 8) | rxdata[3];
  } else {
    *data = (rxdata[2] << 24) | (rxdata[3] << 16) | (rxdata[4] << 8) | rxdata[5];
  }

  return 0;
}