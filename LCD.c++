#include <LiquidCrystal.h>
#define lm A0

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  lcd.print("Temperatura: ");
}

void loop() {

  int leitura = analogRead(lm);
  float volts = (leitura / 1024.0) * 5.0;
  float celcius = (volts) * 100.0;

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temperatura: ");
  lcd.setCursor(0, 1);
  lcd.print(celsius);
  delay(500);
}
