#include <LiquidCrystal.h>

LiquidCrystal Lcd(12, 11, 5, 4, 3, 2);

void setup() {
  Lcd.begin(16, 2);
  Lcd.print("Tá funcionando Karai!!!");
}

void loop() {
  Lcd.setCursor(0, 1);
  Lcd.print(millis() / 1000);
}
