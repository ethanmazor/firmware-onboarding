#include <Arduino.h>
#include "BMEI2CInterface.h"
#include "LEDController.h"
#include "BMEConstants.h"

BMEI2CInterface sensor;
LEDController led(BMEConstants::LED_PIN);

void setup()
{
    sensor.begin();
    led.begin();
    Serial.begin(115200);
}

void loop()
{
    led.update(sensor.readTemperature());
    Serial.println(sensor.readTemperature());
}
