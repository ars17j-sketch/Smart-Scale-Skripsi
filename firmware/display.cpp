#include "display.h"

DisplayManager Display;

void DisplayManager::begin() {
    lcd.init();
    lcd.backlight();
}

void DisplayManager::showSplash() {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("SMART SCALE IOT");
    lcd.setCursor(0,1);
    lcd.print("Firmware v1.0");
}

void DisplayManager::showMeasurement(float weight, float height, float bmi, const String &status) {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("BB:"); lcd.print(weight,1); lcd.print("kg");
    lcd.setCursor(0,1);
    lcd.print("TB:"); lcd.print(height,1); lcd.print("cm");
    lcd.setCursor(0,2);
    lcd.print("BMI:"); lcd.print(bmi,1);
    lcd.setCursor(0,3);
    lcd.print(status);
}

void DisplayManager::showMessage(const String &line1, const String &line2) {
    lcd.clear();
    lcd.setCursor(0,1);
    lcd.print(line1);
    lcd.setCursor(0,2);
    lcd.print(line2);
}

void DisplayManager::clear() {
    lcd.clear();
}
