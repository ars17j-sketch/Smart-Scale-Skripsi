#include "vl53_sensor.h"

VL53Sensor HeightSensor;

bool VL53Sensor::begin() {
    Wire.begin(I2C_SDA_PIN, I2C_SCL_PIN);
    ready = lox.begin();
    gDistanceReady = ready;
    return ready;
}

void VL53Sensor::update() {
    if (!ready) return;

    VL53L0X_RangingMeasurementData_t measure;
    lox.rangingTest(&measure, false);

    if (measure.RangeStatus != 4) {
        currentHeight = measure.RangeMilliMeter / 10.0f;
        gHeight = currentHeight;
    }
}

float VL53Sensor::getHeight() const {
    return currentHeight;
}

bool VL53Sensor::isReady() const {
    return ready;
}
