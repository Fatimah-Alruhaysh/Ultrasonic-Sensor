#include <Servo.h>
Servo moto;

int trig=3, echo=4;
int s=0; //duration
int d=0 ;//distance
  
void setup() {
  moto.attach(7);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
 // serial.begin(9600);
}

void loop()
{
  digitalWrite(trig, LOW);
  delayMicroseconds(2); 
  digitalWrite(trig, HIGH);
  delayMicroseconds(2); 
  digitalWrite(trig, LOW);
  
  s=pulseIn(echo, HIGH);
  d=s*0.034/2;
 // serial.print("Distance");
 // serial.printIn(d);
  if (d<300 && d>200); {
   moto.write(135);
}
   if (d<199 && d>100); {
   moto.write(90);
}
   if (d<99 && d>0); {
   moto.write(45);
}
   
}
