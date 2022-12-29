
const int led = 9;
const int BTN1 = 8;
const int BTN2 = 10;


int button1, button2,value;

void setup() {
  Serial.begin(9600); // to set the data rate in bits per second
  pinMode(BTN1, INPUT);
  pinMode(BTN2, INPUT);
  pinMode(led, OUTPUT);
}


void loop() {
  button1 = digitalRead(BTN1);
  button2 = digitalRead(BTN2);

  if (button1 == HIGH) {
    if (value > 225) {
      value = value; // condition to make sure the value does not exceed the limit which is 255
    }
    else {
      value += 25; // increase the luminosity by 25
      delay(300);
    }
  }

  if (button2 == HIGH) {
    if (value < 25) {
      value = value; // condition to make sure the value does not exceed the limit which is 255
    }
    else {
      value -= 25; // decreasing the luminosity by 25
      delay(300);
    }
  }


  Serial.println(value); // prints the data to the serial port human-readable ASCII text
  analogWrite(led, value); // don't forget to make sure the led is in a pwm or analog pins in order to use analogWrite

}