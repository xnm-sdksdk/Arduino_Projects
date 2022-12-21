#include <Stepper.h>

#define STEPS 100

Stepper stepper(STEPS, 8,10,9,11);

int previous = 0;
int direcao=0;
int val=0;

void setup()
{
  stepper.setSpeed(180);
}

void loop()
{
  val=val+50;
  if (val<256) direcao=-1;
  else direcao=1;
  stepper.step(direcao*10);
  delay(500);
}
