#ifndef VL53_SENSOR_H
#define VL53_SENSOR_H

#include "globals.h"

class VL53Sensor {
public:
    bool begin();
    void update();
    float getHeight() const;
    bool isReady() const;

private:
    float currentHeight = 0.0f;
    bool ready = false;
};

extern VL53Sensor HeightSensor;

#endif