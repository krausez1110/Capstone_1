#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
const int CreamerButtonPin = 6;
const int MilkButtonPin = 7;

int CreamerButtonState = 0;
int MilkButtonState = 0;

void setup() {
  lcd.begin(16,2);
  pinMode(CreamerButtonPin, INPUT);
  pinMode(MilkButtonPin, INPUT);

}

void loop() {
  lcd.setCursor(0,0);
  if(MilkButtonState == LOW && CreamerButtonState == LOW)
  {
    lcd.print("Coffee Machine");
  }

  
  CreamerButtonState = digitalRead(CreamerButtonPin);
  MilkButtonState = digitalRead(MilkButtonPin);

  //while push button 1 is pushed
  if(MilkButtonState == HIGH)
  {

    lcd.setCursor (0, 0);
      for (int i = 0; i < 16; ++i)
        {
          lcd.print(' ');
         }
   
  lcd.setCursor(0,0);
  lcd.print("Milk");
  
  }

  //while push button 2 is pushed
   if(CreamerButtonState == HIGH)
   {
   lcd.setCursor (0, 0);
      for (int i = 0; i < 16; ++i)
        {
          lcd.print(' ');
         }
   lcd.setCursor(0,0);
   lcd.print("Creamer");
   
   }
   
}
