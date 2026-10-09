#pragma once
#include <Adafruit_BME280.h>
#include "BMEConstants.h"

class BMESPIInterface
{
public:
    void begin();
    float readTemperature();

private:
    Adafruit_BME280 bme_{BMEConstants::SPI_CS_PIN};
};
