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
