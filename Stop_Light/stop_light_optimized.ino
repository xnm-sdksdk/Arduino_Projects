int pinled8 = 8;
int pinled9 = 9;
int pinled10 = 10;

void setup()

{
  pinMode(pinled8, OUTPUT);
  pinMode(pinled9, OUTPUT);
  pinMode(pinled10, OUTPUT);
}

void loop()
{
  // first led Green
  digitalWrite(pinled8, HIGH);
  delay(2000);
  digitalWrite(pinled8, LOW);
  delay(100);

  // second led Yellow - first output
  digitalWrite(pinled9, HIGH);
  delay(1000);
  digitalWrite(pinled9, LOW);
  delay(800);

  // second output
  digitalWrite(pinled9, HIGH);
  delay(500);
  digitalWrite(pinled9, LOW);
  delay(500);

  // third output
  digitalWrite(pinled9, HIGH);
  delay(400);
  digitalWrite(pinled9, LOW);
  delay(400);


  // fourth output
  digitalWrite(pinled9, HIGH);
  delay(300);
  digitalWrite(pinled9, LOW);
  delay(300);

  // fifth output
  digitalWrite(pinled9, HIGH);
  delay(200);
  digitalWrite(pinled9, LOW);
  delay(200);


  // sixth output
  digitalWrite(pinled9, HIGH);
  delay(100);
  digitalWrite(pinled9, LOW);
  delay(100);

  // third led Red 
  digitalWrite(pinled10, HIGH);
  delay(2000);
  digitalWrite(pinled10, LOW);
  delay(500);
}