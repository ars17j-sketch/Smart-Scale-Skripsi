#ifndef BMI_H
#define BMI_H

#include <Arduino.h>

class BMIManager {
public:
    float calculate(float weightKg, float heightCm);
    String getCategory(float bmi);
};

extern BMIManager BMI;

#endif