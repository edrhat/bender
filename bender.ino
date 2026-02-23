#include <VarSpeedServo.h>

int vel = 150;

VarSpeedServo m1;
VarSpeedServo m2;

void setup() {
  
  m1.attach(7);
  m2.attach(8);

  

}

void loop() {
  
  
  int pot = analogRead(1);
   int pot2 = analogRead(1);

  pot = map(pot,0,1023,180,100);
  pot2 = map(pot2,0,1023,70,15);


  m1.write(pot,vel);
  m2.write(pot2,vel);
  delay(60);
  //m2.write(pot);

}
