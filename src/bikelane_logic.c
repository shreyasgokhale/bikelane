#include "bikelane_logic.h"

#define SERIAL_TAG "BikeLane"

void parse_navigation_notification(uint8_t *data, uint16_t len)
{
    fixed_data *notification;
    notification = (fixed_data *)malloc(sizeof(fixed_data));
    memcpy(notification, data, sizeof(fixed_data));

    ESP_LOGI(SERIAL_TAG, "ID: %d", notification->identifier);
    ESP_LOGI(SERIAL_TAG, "Direction: %d", notification->direction);
    ESP_LOGI(SERIAL_TAG, "Distance: %d", notification->distnace);

    char* street_name;
    street_name = (char*) malloc(30 * sizeof(char));
    memcpy(street_name,(data + FIXED_DATA_SIZE), (len-FIXED_DATA_SIZE));
    street_name[len-FIXED_DATA_SIZE+1] = '\0';

    ESP_LOGI(SERIAL_TAG, "Street Name: %s", street_name);
}