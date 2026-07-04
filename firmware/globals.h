#ifndef GLOBALS_H
#define GLOBALS_H

#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <HX711_ADC.h>
#include <Adafruit_VL53L0X.h>
#include <EEPROM.h>

#include "config.h"

extern LiquidCrystal_I2C lcd;
extern HX711_ADC scale;
extern Adafruit_VL53L0X lox;

extern float gWeight;
extern float gHeight;
extern float gBMI;

extern bool gScaleReady;
extern bool gDistanceReady;

#endif