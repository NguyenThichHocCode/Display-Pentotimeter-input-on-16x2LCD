#include <LiquidCrystal_I2C.h>
#include <Wire.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
int analog = A0;
void setup() {
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  lcd.clear();


}

void loop() {
  int analogValue = analogRead(analog);
  int temperature = map(analogValue,0,1023,0,100);
  lcd.setCursor(0, 0);
  lcd.print("Analog:");
  lcd.setCursor(8,0);
  lcd.print(analogValue);
  lcd.print("    ");
  lcd.setCursor(0, 1);
  lcd.print("Temp:"); //Temp = Temperature
  lcd.setCursor(7,1);
  lcd.print(temperature);
  lcd.print("    ");
  delay(1000);

}
