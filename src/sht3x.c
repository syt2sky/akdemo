#include "sht3x.h"

#include <device.h>
#include <drivers/sensor.h>

#include <errno.h>

#include <logging/log.h>
LOG_MODULE_REGISTER(fc01evl_sht3x);


static const struct device *sht3x_dev;

int SHT3X_init()
{
  sht3x_dev = device_get_binding("SHT3XD");
  if (sht3x_dev == NULL) {
    LOG_ERR("Could not get SHT3XD device\n");
    return -ENODEV;
  }

  return 0;
} 

int SHT3X_singleShotMeasure(double *temperature, double *humidity)
{
  int err;

  struct sensor_value temp, humi;

  if (sht3x_dev == NULL) {
    LOG_ERR("Could not get SHT3XD device\n");
    return -ENODEV;
  }

  err = sensor_sample_fetch(sht3x_dev);
  if (err == 0) err = sensor_channel_get(sht3x_dev, SENSOR_CHAN_AMBIENT_TEMP, &temp);
  if (err == 0) err = sensor_channel_get(sht3x_dev, SENSOR_CHAN_HUMIDITY, &humi);

  if (err) {
    LOG_ERR("SHT3X_singleShotMeasure: Can't fetch sensor values (err %d)\n", err);
    return err;
  }

  *temperature = sensor_value_to_double(&temp);
  *humidity = sensor_value_to_double(&humi);

  return 0;
}