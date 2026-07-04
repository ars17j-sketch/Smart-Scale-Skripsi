#ifndef HX711_SENSOR_H
#define HX711_SENSOR_H

#include "globals.h"

class HX711Sensor {
public:
    bool begin();
    void update();
    void tare();
    float getWeight() const;
    bool isReady() const;

private:
    float currentWeight = 0.0f;
    bool ready = false;
};

extern HX711Sensor WeightSensor;

#endif