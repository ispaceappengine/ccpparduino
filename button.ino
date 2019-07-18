https://github.com/neoxharsh/Pixel-Fun-M5Stack/blob/master/PixelFun.ino
############################################################
 M5.BtnA/B/C.read();
 M5.BtnA/B/C.isPressed();
 M5.BtnA/B/C.isReleased();
 M5.BtnA/B/C.wasPressed();
 M5.BtnA/B/C.wasReleased();
 M5.BtnA/B/C.wasreleasedFor()
 M5.BtnA/B/C.pressedFor(uint32_t ms);
 M5.BtnA/B/C.releasedFor(uint32_t ms);
 M5.BtnA/B/C.lastChange();

 if(M5.BtnA.wasPressed()) {
 if(M5.BtnB.wasPressed())
 
 M5.update();
############################################################
  void loop() {

    // Send every TX_INTERVAL millis
    static uint32_t last = 0;
    if (0 == last || millis() - last > TX_INTERVAL) {
        last = millis();
        send();
    }

    // Send on button press
    M5.update();
    if (M5.BtnA.wasPressed()) {
        send();
    }
    if (M5.BtnC.wasPressed()) {
        _poweroff = true;
    }

    ttn_loop();

}
############################################################
############################################################
############################################################
############################################################
############################################################
############################################################
############################################################
############################################################
############################################################
