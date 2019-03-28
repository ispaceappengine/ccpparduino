https://docs.espressif.com/projects/esp-idf/en/latest/api-reference/system/sleep_modes.html


#include <M5Stack.h>

+ One pressing will only reset the ESP32, double pressing will be treated as power off, so the PMU will directly cut-off the MCU's power.
+ In deep sleep and light sleep modes, wireless peripherals are powered down.
 
+ Note: in revision 0 of the ESP32, 
RTC fast memory will always be kept enabled in deep sleep, so that the deep sleep stub can run after reset.
 
M5.setWakeupButton(BUTTON_A_PIN); //press 1.button and m5stack wakes up
M5.powerOFF();  // puts the whole machine to sleep
esp_deep_sleep_start(); //putting the esp32 to sleep 
esp_light_sleep_start()
esp_deep_sleep(10000000); //microseconds 1s=1.000.000us
esp_sleep_enable_timer_wakeup() 
gpio_wakeup_enable()
esp_sleep_enable_gpio_wakeup()
