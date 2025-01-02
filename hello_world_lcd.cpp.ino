#include <LiquidCrystal.h> //imports the liquidCrystal Library

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // tells the aurdino which pins i will be using to control things on the lcd

void setup() {
  lcd.begin(16, 2); // sets up and lets the aurdino know the size of the lcd
  lcd.print("Hello World!"); //prints Hello World! to the lcd
}

void loop() {
  // Your main code here
}
