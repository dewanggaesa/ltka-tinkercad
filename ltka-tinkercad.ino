#include <LiquidCrystal.h>

//lcd rs pin to digital pin 12
//lcd enable pin to digital pin 11
//lcd d4 pin to digital pin 5
//lcd d5 pin to digital pin 4
//lcd d6 pin to digital pin 3
//lcd d7 pin to digital pin 2

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
  lcd.begin(16, 2);
}

void loop()
{
  int i;
  
  lcd.setCursor(16, 0);
  lcd.print("AKBAR ESA DEWANGGA");
  lcd.setCursor(16, 1);
  lcd.print("     18116006");
  delay(500);
  for (i = 0; i < 14; i ++)
  {
    lcd.scrollDisplayLeft();
    delay(500);
  }
}