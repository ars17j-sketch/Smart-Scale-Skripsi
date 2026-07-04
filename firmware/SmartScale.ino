#include "config.h"
#include "globals.h"
#include "hx711_sensor.h"
#include "vl53_sensor.h"
#include "display.h"
#include "bmi.h"
#include "eeprom_manager.h"
#include "blynk_manager.h"

void setup() {
  Serial.begin(115200);

  Display.begin();
  Display.showSplash();

  EEPROMStore.begin();
  WeightSensor.begin();
  HeightSensor.begin();
}

void loop() {
  WeightSensor.update();
  HeightSensor.update();

  gBMI = BMI.calculate(gWeight, gHeight);
  String status = BMI.getCategory(gBMI);

  Display.showMeasurement(gWeight, gHeight, gBMI, status);

  delay(200);
}
