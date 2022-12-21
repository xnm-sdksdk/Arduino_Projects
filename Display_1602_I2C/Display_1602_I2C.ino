#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <LiquidCrystal.h>


// Define instance for LCD I2C display
LiquidCrystal_I2C lcd(0x27, 16, 2);
// Change 0x27 to 0x3F and retry if LCD screen does not show anything
// Change 16,2 to 20,4 if you are using LCD2004
void setup() {
  lcd.init(); // Initialize the LCD display screen
  lcd.backlight(); // Turn on backlight of LCD display screen.
// Print a message to the LCD. 
  lcd.setCursor(1, 0); // Go to position column 2 & row 1
  lcd.print("Hello, world!"); // Print "Hello, World!"
  lcd.setCursor(0, 1); // Go to position column 1 & row 2
  lcd.print("I am Arduino"); // Print "I am _Name_"
// // Commonly used instruction codes
// lcd.clear(); // Clear LCD display screen
// lcd.home(); // Go to home position (0,0) - column 1 &row 1
// lcd.setCursor(col,row); // Go to position (column, row)
// lcd.print("text"); // Print text start from specified (column,row)
}
void loop() {
// No loopable program for this example
}