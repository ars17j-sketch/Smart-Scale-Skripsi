#include "bmi.h"

BMIManager BMI;

float BMIManager::calculate(float weightKg, float heightCm) {
    if (heightCm <= 0.0f) return 0.0f;
    float heightM = heightCm / 100.0f;
    return weightKg / (heightM * heightM);
}

String BMIManager::getCategory(float bmi) {
    if (bmi < 18.5f) return "Kurus";
    if (bmi < 25.0f) return "Normal";
    if (bmi < 30.0f) return "Gemuk";
    return "Obesitas";
}
