#include <Servo.h>

Servo servoMotor;

int servoMotorDrc;
int donmeDegeri;
int donmeYonu;
int PIRSensor = 0;

void setup()
{
  pinMode(3, OUTPUT);//LED icin
  pinMode(2, INPUT);//PIR hareket sensoru icin
  pinMode(9, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(8, INPUT);
  servoMotor.attach(10);
  
  Serial.begin(9600);
}

void loop()
{
  
  donmeDegeri = analogRead(A0);
  donmeYonu = digitalRead(8);
  PIRSensor = digitalRead(2);
  
  donmeDegeri = map(donmeDegeri, 0, 1023, 0, 255);
  
  Serial.println(donmeDegeri);
  Serial.println(donmeYonu);
  
  if(PIRSensor == LOW){//Hareket sensorunu kontrol et
  	if(donmeDegeri>0)//DC motor donme degeri 0dan büyükse
  	{
  		if(donmeYonu == 0)
  		{
    		digitalWrite(4, HIGH);
    		digitalWrite(5, LOW);
  		}else{
    		digitalWrite(5, HIGH);
    		digitalWrite(4, LOW);
  		}
    	servoMotor.write(180);//DC motor calisiyorsa servo motor 180
    	digitalWrite(3, HIGH);//Ve LED acik
    
  	}else{
    	servoMotor.write(90);//DC motor calismiyorsa servo motor 90
  		digitalWrite(3, LOW);//Ve LED kapali
  	}
  }else 
    donmeDegeri = 0;
  
  analogWrite(9, donmeDegeri);
  
}