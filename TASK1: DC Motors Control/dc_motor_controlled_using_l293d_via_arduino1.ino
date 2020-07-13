//Controlling two DC motors using L293D via Arduino
//-----------------------------------------------------
//-----------------------------------------------------

//Initialization 

//Motor1
  const int MotorPin1 = 5;
  const int MotorPin2 = 6;
//Motor2
  const int MotorPin3 = 10;
  const int MotorPin4 = 9;


void setup() {
  pinMode(MotorPin1, OUTPUT);
  pinMode(MotorPin2, OUTPUT);
  pinMode(MotorPin3, OUTPUT);
  pinMode(MotorPin4, OUTPUT);
}

void loop() {
  
  //Motor1 - clockwise - 1.5 sec
  digitalWrite(MotorPin1, HIGH);
  digitalWrite(MotorPin2, LOW);
  digitalWrite(MotorPin3, LOW);
  digitalWrite(MotorPin4, LOW);
  delay(1500);

  //Motor1 - anti-clockwise - 1.5 sec
  digitalWrite(MotorPin1, LOW);
  digitalWrite(MotorPin2, HIGH);
  digitalWrite(MotorPin3, LOW);
  digitalWrite(MotorPin4, LOW);
  delay(1500);

  //Motor2 - clockwise - 1.5 sec
  digitalWrite(MotorPin1, LOW);
  digitalWrite(MotorPin2, LOW);
  digitalWrite(MotorPin3, HIGH);
  digitalWrite(MotorPin4, LOW);
  delay(1500);

  //Motor2 - Anti-clockwise - 1.5 sec
  digitalWrite(MotorPin1, LOW);
  digitalWrite(MotorPin2, LOW);
  digitalWrite(MotorPin3, LOW);
  digitalWrite(MotorPin4, HIGH);
  delay(1500);
  
  //Motor1 and motor2 - clockwise - 1.5 sec
  digitalWrite(MotorPin1, HIGH);
  digitalWrite(MotorPin2, LOW);
  digitalWrite(MotorPin3, HIGH);
  digitalWrite(MotorPin4, LOW);
  delay(1500);
  
  //Motor1 and motor2 - anti-clockwise - 1.5 sec
  digitalWrite(MotorPin1, LOW);
  digitalWrite(MotorPin2, HIGH);
  digitalWrite(MotorPin3, LOW);
  digitalWrite(MotorPin4, HIGH);
  delay(1500);
  
  //All off - 3 sec
  digitalWrite(MotorPin1, LOW);
  digitalWrite(MotorPin2, LOW);
  digitalWrite(MotorPin3, LOW);
  digitalWrite(MotorPin4, LOW);
  delay(3000);
  
}