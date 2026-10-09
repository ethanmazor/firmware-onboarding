#pragma once
#include <Arduino.h>

class LEDController
{
public:
    explicit LEDController(uint8_t pin);
    void begin();
    void update(float temperatureC);

private:
    uint8_t pin_;
    bool ledOn_ = false;
    unsigned long lastToggleMs_ = 0;
};
