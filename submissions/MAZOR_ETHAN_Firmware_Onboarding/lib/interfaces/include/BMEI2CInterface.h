#pragma once
#include <Adafruit_BME280.h>

class BMEI2CInterface
{
public:
    void begin();
    float readTemperature();

private:
    Adafruit_BME280 bme_;
};
