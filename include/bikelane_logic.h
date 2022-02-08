#ifndef BIKELANE_LOGIC_H_
#define BIKELANE_LOGIC_H_

#include <stdio.h>
#include <stdint.h>
#include <string.h>

#include "esp_log.h"


typedef struct
{
    uint32_t identifier : 32;
    uint8_t direction : 8;
    uint32_t distnace : 16;
} fixed_data;

// 9 bytes
#define FIXED_DATA_SIZE 9


void parse_navigation_notification(uint8_t *data, uint16_t len);

#endif