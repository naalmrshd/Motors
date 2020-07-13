//Controlling a DC motor using relays via Arduino
//-----------------------------------------------------
//-----------------------------------------------------

//Initialization 

//Motor1
  const int MotorPin1 = 10;
  const int MotorPin2 = 9;

void setup(){
  
  pinMode(MotorPin1,OUTPUT);
  pinMode(MotorPin2,OUTPUT);
  
}


void loop() {
  
  //Motor1 - clockwise 
  digitalWrite(MotorPin1, HIGH);
  digitalWrite(MotorPin2, LOW);
  delay(50000);  
  
  //Motor1 - anticlockwise 
  digitalWrite(MotorPin1, LOW);
  digitalWrite(MotorPin2, HIGH);
  delay(50000);
  
}


