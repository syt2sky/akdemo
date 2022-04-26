#include <logging/log.h>
LOG_MODULE_REGISTER(fc01evl_main);

#include <zephyr.h>
#include <sys/printk.h>

#ifdef CONFIG_MCUMGR_CMD_OS_MGMT
#include <os_mgmt/os_mgmt.h>
#endif
#ifdef CONFIG_MCUMGR_CMD_IMG_MGMT
#include <img_mgmt/img_mgmt.h>
#endif

#include <dk_buttons_and_leds.h>
#include <device.h>
#include <drivers/display.h>
#include <lvgl.h>

#include "ble_service.h"
#include "adpd4100.h"
#include "ad5941.h"
#include "sht3x.h"


#if DT_NODE_HAS_STATUS(DT_INST(0, sitronix_st7789v), okay)
#define DISPLAY_DEV_NAME DT_LABEL(DT_INST(0, sitronix_st7789v))
#endif

void sysInit()
{
    int err;

    err = dk_leds_init();
    if (err) {
        LOG_ERR("LEDs init failed (err %d)", err);
    }

    err = ADPD4100_init();
    if (err) {
        LOG_ERR("ADPD4100 init failed (err %d)", err);
    }

    err = AD5941_init();
    if (err) {
        LOG_ERR("AD5941 init failed (err %d)", err);
    }

    err = SHT3X_init();
    if (err) {
        LOG_ERR("SHT3X init failed (err %d)", err);
    }

    err = ble_init();
    if (err) {
        LOG_ERR("BLE service init failed (err %d)", err);
    }
}

void main(void)
{
    uint16_t adpd4100_id;
    uint32_t ad5941_adiid, ad5941_id;
    double sht3x_temp = 0, sht3x_humi = 0;

    uint32_t count = 0U;
	char count_str[11] = {0};
	const struct device *display_dev;
	lv_obj_t *hello_world_label;
	lv_obj_t *count_label;

#ifdef CONFIG_MCUMGR_CMD_OS_MGMT
    os_mgmt_register_group();
#endif
#ifdef CONFIG_MCUMGR_CMD_IMG_MGMT
    img_mgmt_register_group();
#endif

    sysInit();

	display_dev = device_get_binding(DISPLAY_DEV_NAME);
	if (display_dev == NULL) {
		LOG_ERR("Device %s not found. Aborting sample.",
			DISPLAY_DEV_NAME);
        while (1);
	}
    LOG_INF("Display: %s", display_dev->name);

	if (IS_ENABLED(CONFIG_LVGL_POINTER_KSCAN)) {
		lv_obj_t *hello_world_button;

		hello_world_button = lv_btn_create(lv_scr_act(), NULL);
		lv_obj_align(hello_world_button, NULL, LV_ALIGN_CENTER, 0, 0);
		lv_btn_set_fit(hello_world_button, LV_FIT_TIGHT);
		hello_world_label = lv_label_create(hello_world_button, NULL);
	} else {
	    hello_world_label = lv_label_create(lv_scr_act(), NULL);
	}

	lv_label_set_text(hello_world_label, "Hello world!");
	lv_obj_align(hello_world_label, NULL, LV_ALIGN_CENTER, 0, 0);

	count_label = lv_label_create(lv_scr_act(), NULL);
	lv_obj_align(count_label, NULL, LV_ALIGN_IN_BOTTOM_MID, 0, 0);

	lv_task_handler();
	display_blanking_off(display_dev);

	while (1) {
		sprintf(count_str, "%d", count);
		lv_label_set_text(count_label, count_str);
		lv_task_handler();
		++count;

        ADPD4100_readRegister(ADPD4100_REG_CHIP_ID, &adpd4100_id);
        LOG_INF("ADPD4100 Chip ID: 0x%.4x", adpd4100_id);

        AD5941_readRegister(AD5941_REG_ADIID, &ad5941_adiid, 1);
        AD5941_readRegister(AD5941_REG_CHIPID, &ad5941_id, 1);
        LOG_INF("AD5941   ADI ID:  0x%.4x, Chip ID: 0x%.4x", ad5941_adiid, ad5941_id);

        SHT3X_singleShotMeasure(&sht3x_temp, &sht3x_humi);
        LOG_INF("SHT3X Temperature: %.2f Cel, Humidity: %.2f %%RH", sht3x_temp, sht3x_humi);

        temperatureNotify(sht3x_temp);
        humidityNotify(sht3x_humi);

        dk_set_led_on(0);
        k_sleep(K_MSEC(500));
        dk_set_led_off(0);
        k_sleep(K_MSEC(500));
	}
}
