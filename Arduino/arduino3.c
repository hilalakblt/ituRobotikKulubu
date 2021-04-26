#include <Servo.h>

Servo sMotor1;
Servo sMotor2;
Servo sMotor3;

int okunanDeger1, okunanDeger2, okunanDeger3;
int derece1, derece2, derece3;

void setup()
{
  sMotor1.attach(9);
  sMotor2.attach(10);
  sMotor3.attach(11);
  
  Serial.begin(9600);
}

void loop()
{
  okunanDeger1 = analogRead(A0);
  okunanDeger2 = analogRead(A1);
  okunanDeger3 = analogRead(A2);
  
  derece1 = map(okunanDeger1, 0, 1023, 0, 180);
  derece2 = map(okunanDeger2, 0, 1023, 0, 180);
  derece3 = map(okunanDeger3, 0, 1023, 0, 180);
  
  sMotor1.write(derece1);
  sMotor2.write(derece2);
  sMotor3.write(derece3);
}