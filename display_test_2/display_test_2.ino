#include <M5Unified.h>

void setup() {
    M5.begin();
    M5.Display.fillScreen(BLACK);
    M5.Display.setTextSize(2);
}

void loop() {
    M5.update(); 

    // isPressed(): 今現在、ボタンが物理的に押されているかどうか
    if (M5.BtnA.isPressed()) {
        M5.Display.fillScreen(GREEN);
        M5.Display.setCursor(10, 50);
        M5.Display.setTextColor(BLACK);
        M5.Display.print("PUSHING!");
    } else {
        M5.Display.fillScreen(BLACK);
        M5.Display.setCursor(10, 50);
        M5.Display.setTextColor(WHITE);
        M5.Display.print("RELEASED");
    }
}