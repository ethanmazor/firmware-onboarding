#include "BMESPIInterface.h"

void BMESPIInterface::begin()
{
    bme_.begin();
}

float BMESPIInterface::readTemperature()
{
    return bme_.readTemperature();
}
