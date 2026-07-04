#include "hx711_sensor.h"

HX711Sensor WeightSensor;

bool HX711Sensor::begin() {
    scale.begin();
    scale.start(2000, true);
    ready = true;
    gScaleReady = true;
    return ready;
}

void HX711Sensor::update() {
    if (scale.update()) {
        currentWeight = scale.getData();
        gWeight = currentWeight;
    }
}

void HX711Sensor::tare() {
    scale.tareNoDelay();
}

float HX711Sensor::getWeight() const {
    return currentWeight;
}

bool HX711Sensor::isReady() const {
    return ready;
}
