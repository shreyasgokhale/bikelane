#ifndef BLE_PARAMETERS_H_
#define BLE_PARAMETERS_H_
#include <stdint.h>
#include "esp_bt.h"
#include "esp_gattc_api.h"

uint8_t gatt_primary_service[ESP_UUID_LEN_128] = {0x6C, 0x43, 0xB3, 0x1D, 0x17, 0x0F, 0xB2, 0xA2, 0xA8, 0x4F, 0x2F, 0xD9, 0x28, 0xE1, 0xC1, 0x71};
uint8_t navigation_update_service_uuid[ESP_UUID_LEN_128] = {0x26, 0x30, 0x48, 0x57, 0x0A, 0x27, 0x35, 0xB2, 0x6E, 0x4F, 0xCB, 0x9B, 0x05, 0xD6, 0x3D, 0x50};

esp_bt_uuid_t remote_filter_service_uuid = {
    .len = ESP_UUID_LEN_128,
    .uuid = {
        .uuid128 = {0},
    },
};

esp_bt_uuid_t remote_filter_char_uuid = {
    .len = ESP_UUID_LEN_128,
    .uuid = {
        .uuid128 = {0},
    },
};

esp_bt_uuid_t notify_descr_uuid = {
    .len = ESP_UUID_LEN_16,
    .uuid = {
        .uuid16 = ESP_GATT_UUID_CHAR_CLIENT_CONFIG,
    },
};

esp_ble_scan_params_t ble_scan_params = {
    .scan_type = BLE_SCAN_TYPE_ACTIVE,
    .own_addr_type = BLE_ADDR_TYPE_PUBLIC,
    .scan_filter_policy = BLE_SCAN_FILTER_ALLOW_ALL,
    .scan_interval = 0x50,
    .scan_window = 0x30,
    .scan_duplicate = BLE_SCAN_DUPLICATE_DISABLE};

#endif
