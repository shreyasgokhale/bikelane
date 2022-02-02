#include <unity.h>
#include "komoot_connect.c"
#include "esp_err.h"
#include "esp_gap_ble_api.h"

// struct ble_scan_result_evt_param scan_response = {
//     .search_evt = ESP_GAP_SEARCH_INQ_RES_EVT,
//     .ble_evt_type = ESP_BLE_EVT_CONN_ADV,
// };

void test_ble_init(void)
{
    TEST_ASSERT_EQUAL(ESP_OK, bluetooth_init());
}

void test_bluetooth_client_init(void)
{
    TEST_ASSERT_EQUAL(ESP_OK, bluetooth_client_init());
}

void setUp()
{
    esp_err_t ret = nvs_flash_init();

    if (ret == ESP_ERR_NVS_NO_FREE_PAGES || ret == ESP_ERR_NVS_NEW_VERSION_FOUND)
    {
        ESP_ERROR_CHECK(nvs_flash_erase());
        ret = nvs_flash_init();
    }
    ESP_ERROR_CHECK(ret);
}

void app_main()
{
    UNITY_BEGIN();

    RUN_TEST(test_ble_init);

    UNITY_END();
}

void tearDown()
{
}