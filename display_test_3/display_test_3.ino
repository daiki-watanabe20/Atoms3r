//test2からフラグ管理で状態保持するverに変更

#include <M5Unified.h>

void setup() {
    M5.begin();
    M5.Display.fillScreen(BLACK);
    M5.Display.setTextSize(2);
}

//フラグ管理用
bool last_state = false;

void loop() {
    M5.update(); 

    bool current_state = M5.BtnA.isPressed();

    // 状態が「変化」した瞬間だけ判定
    if (current_state != last_state) {
        if (current_state) {
            // 押された瞬間の1回だけ実行
            //M5.BtnA.wasPressed();
            M5.Display.fillScreen(GREEN);
            M5.Display.setCursor(10, 50);
            M5.Display.setTextColor(BLACK);
            M5.Display.print("PUSHING!");
        } else {
            // 離された瞬間の1回だけ実行
            //M5.BtnA.wasReleased();
            M5.Display.fillScreen(BLACK);
            M5.Display.setCursor(10, 50);
            M5.Display.setTextColor(WHITE);
            M5.Display.print("RELEASED");
        }
        // ラスト状態を更新
        last_state = current_state;
    }
}