#include "adpd4100.h"

#include <device.h>
#include <drivers/spi.h>

#include <sys/printk.h>
#include <errno.h>


#define ADPD4100_NODE  DT_NODELABEL(adpd4100)
#define SPI_BUS        DT_LABEL(DT_BUS(ADPD4100_NODE))

static const struct device *spi_dev;
static const struct spi_cs_control *spi_cs = SPI_CS_CONTROL_PTR_DT(ADPD4100_NODE, 0);
static struct spi_config spi_config;


/** Init SPI for ADPD4100 */
int ADPD4100_init(void)
{
  spi_dev = device_get_binding(SPI_BUS);
  if (spi_dev == NULL) {
    printk("Cannot find SPI device %s!\n", SPI_BUS);
    return -ENODEV;
  }

  spi_config.frequency = DT_PROP(ADPD4100_NODE, spi_max_frequency);
  spi_config.operation = SPI_WORD_SET(8);
  spi_config.cs = spi_cs;

  printk("ADPD4100 CS Pin: GPIO %s, pin %d.\n", spi_cs->gpio_dev->name, spi_cs->gpio_pin);

  return 0;
}

/** Read device register. */
int ADPD4100_readRegister(uint16_t addr, uint16_t *data)
{
  int err;
  uint8_t txdata[2] = {0};
  uint8_t rxdata[2] = {0};

  addr = addr << 1;
  txdata[0] = addr >> 8;
  txdata[1] = addr & 0xff;

  struct spi_buf txbufs[] = {
    {.buf = txdata, .len = sizeof(txdata)}
  };
  struct spi_buf_set txbufset = {.buffers = txbufs, .count = ARRAY_SIZE(txbufs)};
  struct spi_buf rxbufs[] = {
    {.buf = NULL, .len = sizeof(txdata)}, 
    {.buf = rxdata, .len = sizeof(rxdata)}
  };
  struct spi_buf_set rxbufset = {.buffers = rxbufs, .count = ARRAY_SIZE(rxbufs)};
  
  err = spi_transceive(spi_dev, &spi_config, &txbufset, &rxbufset);
  if (err) {
    printk("ADPD4100_readRegister: SPI transceive failed (err %d)\n", err);
    return err;
  }
  
  *data = (rxdata[0] << 8) | rxdata[1];

  return 0;
}

/** Write device register. */
int ADPD4100_writeRegister(uint16_t addr, uint16_t data)
{
  return 0;
}

/** Do a read and write of a register to update only part of a register. */
int ADPD4100_writeRegisterMask(uint16_t addr, uint16_t data, uint16_t mask)
{
  return 0;
}