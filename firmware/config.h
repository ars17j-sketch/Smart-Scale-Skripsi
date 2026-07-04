#ifndef CONFIG_H
#define CONFIG_H

#define FIRMWARE_NAME "Smart Scale Skripsi"
#define FIRMWARE_VERSION "1.0.0"

// HX711
#define HX711_DOUT_PIN 18
#define HX711_SCK_PIN 19

// I2C
#define I2C_SDA_PIN 21
#define I2C_SCL_PIN 22

// LCD
#define LCD_ADDRESS 0x27
#define LCD_COLUMNS 20
#define LCD_ROWS 4

// Buzzer
#define BUZZER_PIN 27

// LEDs
#define LED_GREEN_PIN 25
#define LED_RED_PIN 26

// EEPROM
#define EEPROM_SIZE 512

#endif