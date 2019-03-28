//snippets about M5Stack Lcd
//lcd x_width=320, y_height=240

M5.begin(); // initialize the M5Stack object

//display
//start top left corner, x to right, y down
M5.Lcd.fillScreen(BLACK); // Lcd display RED, GREEN, BLUE, BLACK, WHITE
M5.Lcd.setBrightness(brightness); //where brightness is 100 for on and 0 for off.

//text
M5.Lcd.setCursor(10, 10);
M5.Lcd.setTextColor(WHITE);
M5.Lcd.setTextSize(1);
M5.Lcd.printf("Display Test!");

//graphics
M5.Lcd.drawRect(100, 100, 50, 50, BLUE);
M5.Lcd.fillRect(100, 100, 50, 50, BLUE);
M5.Lcd.drawCircle(100, 100, 50, RED);
M5.Lcd.fillCircle(100, 100, 50, RED);
M5.Lcd.drawTriangle(30, 30, 180, 100, 80, 150, YELLOW);
M5.Lcd.fillTriangle(30, 30, 180, 100, 80, 150, YELLOW);

M5.lcd.setBrightness(uint8_t brightness);
M5.Lcd.drawPixel(int16_t x, int16_t y, uint16_t color);
M5.Lcd.drawLine(int16_t x0, int16_t y0, int16_t x1, int16_t y1, uint16_t color);
M5.Lcd.fillRect(int16_t x, int16_t y, int16_t w, int16_t h, uint16_t color);
M5.Lcd.fillScreen(uint16_t color);
M5.Lcd.drawCircle(int16_t x0, int16_t y0, int16_t r, uint16_t color);
M5.Lcd.drawCircleHelper(int16_t x0, int16_t y0, int16_t r, uint8_t cornername,uint16_t color);
M5.Lcd.fillCircle(int16_t x0, int16_t y0, int16_t r, uint16_t color);
M5.Lcd.fillCircleHelper(int16_t x0, int16_t y0, int16_t r, uint8_t cornername,int16_t delta, uint16_t color);
M5.Lcd.drawTriangle(int16_t x0, int16_t y0, int16_t x1, int16_t y1, int16_t x2, int16_t y2, uint16_t color);
M5.Lcd.fillTriangle(int16_t x0, int16_t y0, int16_t x1, int16_t y1, int16_t x2, int16_t y2, uint16_t color);
M5.Lcd.drawRoundRect(int16_t x0, int16_t y0, int16_t w, int16_t h, int16_t radius, uint16_t color);
M5.Lcd.fillRoundRect(int16_t x0, int16_t y0, int16_t w, int16_t h, int16_t radius, uint16_t color);
M5.Lcd.drawBitmap(int16_t x, int16_t y, const uint8_t bitmap[], int16_t w, int16_t h, uint16_t color);
M5.Lcd.drawRGBBitmap(int16_t x, int16_t y, const uint16_t bitmap[], int16_t w, int16_t h),
M5.Lcd.drawChar(uint16_t x, uint16_t y, char c, uint16_t color, uint16_t bg, uint8_t size);
M5.Lcd.setCursor(uint16_t x0, uint16_t y0);
M5.Lcd.setTextColor(uint16_t color);
M5.Lcd.setTextColor(uint16_t color, uint16_t backgroundcolor);
M5.Lcd.setTextSize(uint8_t size);
M5.Lcd.setTextWrap(boolean w);
M5.Lcd.printf();
M5.Lcd.print();
M5.Lcd.println();
M5.Lcd.drawCentreString(const char *string, int dX, int poY, int font);
M5.Lcd.drawRightString(const char *string, int dX, int poY, int font);
M5.Lcd.drawJpg(const uint8_t *jpg_data, size_t jpg_len, uint16_t x, uint16_t y);
M5.Lcd.drawJpgFile(fs::FS &fs, const char *path, uint16_t x, uint16_t y);
M5.Lcd.drawBmpFile(fs::FS &fs, const char *path, uint16_t x, uint16_t y);
