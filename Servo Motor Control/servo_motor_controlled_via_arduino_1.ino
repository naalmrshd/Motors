//Controlling two Servo motors via Arduino
//-----------------------------------------------------
//-----------------------------------------------------


#include <Servo.h>

int position = 0; 
Servo servo1;
Servo servo2;

void setup()
{
  servo1.attach(5);
  servo2.attach(6);
}

void loop()
{
  //sweep servo1 and servo2 from 0 to 90 degrees
  for (position = 0; position <= 90; position += 1) {
    servo1.write(position);
    servo2.write(position);
    // wait 20 ms for servos to reach the position
    delay(20);
  }
  
  //sweep servo1 and servo2 from 90 to 0 degrees 
  for (position = 90; position >= 0; position -= 1) {
    servo1.write(position);
    servo2.write(position);
    // wait 20 ms for servos to reach the position
    delay(20);
  }
  
  //delay for 1 second
  delay(1000);
  
  // Servo1: sweep from 0 to 90 degrees
  for (position = 0; position <= 90; position += 1) {
    servo1.write(position);
    // wait 20 ms for servo to reach the position
    delay(20);
  }
  
  // Servo1: sweep from 90 to 0 degrees
  for (position = 90; position >= 0; position -= 1) {
    servo1.write(position);
    // wait 20 ms for servo to reach the position
    delay(20);
  }
  
  //delay for 1 second
  delay(1000);
  
  // Servo2: sweep from 0 to 90 degrees
  for (position = 0; position <= 90; position += 1) {
    servo2.write(position);
    // wait 20 ms for servo to reach the position
    delay(20);
  }
  
  // Servo2: sweep from 90 to 0 degrees
  for (position = 90; position >= 0; position -= 1) {
    servo2.write(position);
    // wait 20 ms for servo to reach the position
    delay(20);
  }
  
  //delay for 1 second
  delay(1000);
 
}