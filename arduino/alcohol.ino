#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

#define buzzerPin 8

#define gasPin A0

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
  
  pinMode(buzzerPin,OUTPUT);
  
  lcd.setCursor(0, 0);
  lcd.print("Calibrating");
  for(int i = 0; i <10; i++){
    if (i==4){
      lcd.setCursor(0, 1);
      lcd.print(".");
    }
    else lcd.print(".");
    delay(500);
  }
  lcd.setCursor(5, 1);
  lcd.print("done");
  delay(1000);
  lcd.clear();

lcd.setCursor(1, 0);

lcd.print("SENSOR ACTIVE");

delay(1500);

lcd.clear();

}

void loop() {

int gasSensor = analogRead(gasPin);

if (gasSensor > 350)

{

digitalWrite(buzzerPin,HIGH);

lcd.setCursor(0, 0);

lcd.print("Value : ");

lcd.print(gasSensor);

Serial.print(gasSensor);

Serial.print("\t");

lcd.setCursor(0, 1);

Serial.println("Gas Level is HIGH");

lcd.print("Gas Level is HIGH");

delay(300);

lcd.clear();

}

else if (gasSensor < 350)

{

digitalWrite(buzzerPin,LOW);

lcd.setCursor(0, 0);

lcd.print("Value : ");

lcd.print(gasSensor);

Serial.print(gasSensor);

Serial.print("\t");

lcd.setCursor(0, 1);

Serial.println("Gas level is LOW");

lcd.print("Gas level is LOW");

delay(300);

}

}