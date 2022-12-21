void setup()
{Serial.begin(9600);
}

int temp=0;

// the loop routine runs over and over again forever:
void loop()
{

int sensorValue = analogRead(A0);

temp=(sensorValue* 0.48828125);

Serial.println(temp);
delay(1);

} 
