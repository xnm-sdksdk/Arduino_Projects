// ************* library's ***************************

// Servo library
#include <Servo.h>

// IR Remote library
#include <IRremote.h>

// LCD library
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Stepper library
#include <Stepper.h>
//**************************************+***************

// Stepper
#define STEPS 32
int number_steps;
Stepper small_stepper(STEPS, 8, 10, 9,11);

// Servo
Servo myservo;

// IR Receiver
IRrecv irrecv(12); // IR receiver connected to digital pin 11
decode_results results;

// LCD I2C Display
LiquidCrystal_I2C lcd(0x27, 16, 2);


void setup() {
  // Servo
  myservo.attach(13);    // Servo motor connected to digital pin 
  // IR Receiver
  irrecv.enableIRIn(); // Start the IR receiver
  // lcd
  lcd.init();
  lcd.backlight();
  lcd.print("Race Arduino Car");

  // Print to Serial Monitor
  Serial.begin(9600);
}

void loop() {
  lcd.setCursor(0,0);
  if (irrecv.decode(&results)) {
      Serial.print("irCode: ");            
      Serial.print(results.value, HEX); 
      Serial.print(",  bits: ");           
      Serial.println(results.bits); 
    switch(results.value) {
      case 0xFF18E7: // Frente
                    Serial.print("Frente!");
                    lcd.init();
                    lcd.backlight();
                    lcd.print("Frente!");
                    delay(2000);
                    lcd.clear();
                    small_stepper.setSpeed(500);
                    number_steps = 2048; // Clockwise
                    small_stepper.step(number_steps);
        break;
      case 0x8C22657B: // Esquerda
                      myservo.write(0);
                  break;
      case 0x449E79F: // Direita
                    myservo.write(15);
                  break;
      case 0xFF4AB5: // Trás
                    // Print to the Serial Monitor
                    Serial.print("Tras!");
                    // Instructions to the lcd
                    lcd.init();
                    lcd.backlight();
                    lcd.print("Trás!");
                    delay(2000);
                    lcd.clear();
                    
                    // Stepper commands
                    small_stepper.setSpeed(500);
                    number_steps = -2048; // Counter - Clockwise
                    small_stepper.step(number_steps);
        break;
  }
    irrecv.resume(); // Receive the next value
  }
}
