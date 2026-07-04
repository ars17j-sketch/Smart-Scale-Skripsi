#include "globals.h"

LiquidCrystal_I2C lcd(LCD_ADDRESS, LCD_COLUMNS, LCD_ROWS);
HX711_ADC scale(HX711_DOUT_PIN, HX711_SCK_PIN);
Adafruit_VL53L0X lox;

float gWeight = 0.0f;
float gHeight = 0.0f;
float gBMI = 0.0f;

bool gScaleReady = false;
bool gDistanceReady = false;
