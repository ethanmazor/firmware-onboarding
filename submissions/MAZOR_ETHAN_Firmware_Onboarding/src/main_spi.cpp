#include <Arduino.h>
#include "BMESPIInterface.h"
#include "LEDController.h"
#include "BMEConstants.h"

BMESPIInterface sensor;
LEDController led(BMEConstants::LED_PIN);

void setup()
{
    sensor.begin();
    led.begin();
}

void loop()
{
    led.update(sensor.readTemperature());
}
