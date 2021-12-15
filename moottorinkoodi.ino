#include <Stepper.h> 

int numberofstep = 48; 
                                  

Stepper motor(numberofstep,10,11,5,6);    // we use pins 5, 6, 10, 11       
void setup() 
{ 
  motor.setSpeed(12); // we set motor speed at 12
}

void loop() 
{ 
  motor.step(47); // the motor will run during 47 step 
  delay(5000);
  motor.step(-47); // the motor will run during 47 step in reverse 
  delay(5000);
}
