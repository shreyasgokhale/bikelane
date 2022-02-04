#ifndef BIKELANE_LOGIC_H_
#define BIKELANE_LOGIC_H_

#include <stdio.h>
#include <stdint.h>
#include <string.h>

#include "esp_log.h"


typedef struct
{
    uint32_t identifier;
    uint8_t direction;
    uint32_t distnace;
} fixed_data;

// 9 bytes
#define FIXED_DATA_SIZE 9


void parse_navigation_notification(uint8_t *data, uint16_t len);

#endif