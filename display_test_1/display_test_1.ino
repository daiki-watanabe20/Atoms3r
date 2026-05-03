#include <M5Unified.h>

void setup() {
    M5.begin(); // 初期化（LCD, Backlight等）
    
    M5.Display.fillScreen(GREEN); // 背景を緑
    M5.Display.setCursor(0, 50); // 中央付近にカーソル移動
    M5.Display.setTextSize(2);   // 文字サイズ
    M5.Display.print("ATOM S3R"); // 文字表示
}

void loop() {
}