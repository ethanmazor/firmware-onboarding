#include "BMEI2CInterface.h"
#include "BMEConstants.h"

void BMEI2CInterface::begin()
{
    bme_.begin(BMEConstants::I2C_ADDRESS);
}

float BMEI2CInterface::readTemperature()
{
    return bme_.readTemperature();
}
