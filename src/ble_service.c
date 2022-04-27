#include "ble_service.h"
#ifdef CONFIG_MCUMGR_SMP_BT
#include <mgmt/mcumgr/smp_bt.h>
#endif

#include <logging/log.h>
LOG_MODULE_REGISTER(fc01evl_ble);


BT_GATT_SERVICE_DEFINE(sht3x_svc,
    BT_GATT_PRIMARY_SERVICE(BT_UUID_ESS),
    BT_GATT_CHARACTERISTIC(BT_UUID_TEMPERATURE, BT_GATT_CHRC_NOTIFY,
                            BT_GATT_PERM_NONE, NULL, NULL, NULL),
    BT_GATT_CHARACTERISTIC(BT_UUID_HUMIDITY, BT_GATT_CHRC_NOTIFY,
                            BT_GATT_PERM_NONE, NULL, NULL, NULL),
);

BT_GATT_SERVICE_DEFINE(xinfoo_svc,
    BT_GATT_PRIMARY_SERVICE(BT_UUID_DECLARE_16(0x58F1)),
    BT_GATT_CHARACTERISTIC(BT_UUID_DECLARE_16(0x58F1), BT_GATT_CHRC_WRITE_WITHOUT_RESP,
                            BT_GATT_PERM_NONE, NULL, NULL, NULL),
    BT_GATT_CHARACTERISTIC(BT_UUID_DECLARE_16(0x58F2), BT_GATT_CHRC_NOTIFY,
                            BT_GATT_PERM_NONE, NULL, NULL, NULL),
);

static struct bt_conn *bt_connection;
static struct k_work advertise_work;

static void bt_ready(int err)
{
    if (err) {
        LOG_ERR("Bluetooth init failed (err %d)", err);
        return;
    }

    LOG_INF("Bluetooth initialized");

    k_work_submit(&advertise_work);
}

static void advertise(struct k_work *work)
{
    int rc;

    bt_le_adv_stop();

    rc = bt_le_adv_start(BT_LE_ADV_CONN_NAME, ad, ARRAY_SIZE(ad), NULL, 0);
    if (rc) {
        LOG_ERR("Advertising failed to start (rc %d)", rc);
        return;
    }

    LOG_INF("Advertising successfully started");
}

static void ble_connected(struct bt_conn *conn, uint8_t err)
{
    if (err) {
        LOG_ERR("Bluetooth connection failed (err 0x%02x)", err);
    }
    else {
        LOG_INF("Bluetooth connected");
        bt_connection = conn;
    }
}

static void ble_disconnected(struct bt_conn *conn, uint8_t reason)
{
    LOG_INF("Bluetooth disconnected (reason 0x%02x)", reason);
    bt_connection = NULL;
    k_work_submit(&advertise_work);
}

static struct bt_conn_cb bt_conn_callbacks = {
    .connected = ble_connected,
    .disconnected = ble_disconnected
};

int ble_init(void)
{
    int err;

    k_work_init(&advertise_work, advertise);
    err = bt_enable(bt_ready);

    if (!err) {
        bt_conn_cb_register(&bt_conn_callbacks);
    #ifdef CONFIG_MCUMGR_SMP_BT
        err = smp_bt_register();
        if (err){
            LOG_ERR("SMP BT register failed (err: %d)", err);
        }
    #endif
    }

    return err;
}

int temperatureNotify(const double temperature)
{
    int err;

    err = bt_gatt_notify(bt_connection, &sht3x_svc.attrs[2], &temperature, sizeof(double));
    if (err) {
        LOG_ERR("Temperature notify failed (err %d)", err);
    }

    return err;
}

int humidityNotify(const double humidity)
{
    int err;

    err = bt_gatt_notify(bt_connection, &sht3x_svc.attrs[3], &humidity, sizeof(double));
    if (err) {
        LOG_ERR("Humidity notify failed (err %d)", err);
    }
    
    return err;
}