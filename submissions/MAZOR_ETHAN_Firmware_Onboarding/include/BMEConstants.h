#pragma once
#include <Arduino.h>

namespace BMEConstants
{
    constexpr uint8_t I2C_ADDRESS = 0x76;
    constexpr uint8_t SPI_CS_PIN = 10;
    constexpr uint8_t LED_PIN = LED_BUILTIN;

    // Temperatures (C) mapped onto blink intervals (ms)
    constexpr long MIN_TEMP_C = 25;
    constexpr long MAX_TEMP_C = 28;
    constexpr long SLOW_BLINK_MS = 1000;
    constexpr long FAST_BLINK_MS = 100;
}
