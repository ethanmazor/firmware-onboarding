#include "LEDController.h"
#include "BMEConstants.h"

using namespace BMEConstants;

LEDController::LEDController(uint8_t pin) : pin_(pin) {}

void LEDController::begin()
{
    pinMode(pin_, OUTPUT);
}

void LEDController::update(float temperatureC)
{
    // constrain temperature to bounds
    long temperature = constrain(temperatureC, MIN_TEMP_C, MAX_TEMP_C);
    // map the current temperature reading to a blink rate
    unsigned long interval = map(temperature, MIN_TEMP_C, MAX_TEMP_C, SLOW_BLINK_MS, FAST_BLINK_MS);

    // blink the led
    if (millis() - lastToggleMs_ >= interval)
    {
        lastToggleMs_ = millis();
        ledOn_ = !ledOn_;
        digitalWrite(pin_, ledOn_);
    }
}
