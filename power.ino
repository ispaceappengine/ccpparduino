#include <M5Stack.h>

One pressing will only reset the ESP32, double pressing will be treated as power off, so the PMU will directly cut-off the MCU's power.
 
M5.setWakeupButton(BUTTON_A_PIN); //press 1.button and m5stack wakes up
M5.powerOFF();  // puts the whole machine to sleep
esp_deep_sleep_start(); //putting the esp32 to sleep 
