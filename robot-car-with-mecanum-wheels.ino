// Define all the pins of the motor driver module L298N

//Pins for front wheels
#define in1F 2
#define in2F 3
#define in3F 4
#define in4F 5

//Pins for back wheels
#define in1B 6
#define in2B 7
#define in3B 8
#define in4B 9

void setup() {

  // Define if pins are input or output
  pinMode(in1Front, OUTPUT);
  pinMode(in2Front, OUTPUT);
  pinMode(in3Front, OUTPUT);
  pinMode(in4Front, OUTPUT);
  pinMode(in1Back, OUTPUT);
  pinMode(in2Back, OUTPUT);
  pinMode(in3Back, OUTPUT);
  pinMode(in4Back, OUTPUT);

}

void loop() {

  Forward();
  delay(2000);  //move forward for 2 seconds

  Backward();
  delay(2000);  //move backward for 2 seconds

  StrafeLeft();
  delay(2000);  //move horizontal left for 2 seconds

  StrafeRight();
  delay(2000);  //move horizontal right for 2 seconds

  RotateLeft();
  delay(2000);  //rotate left for 2 seconds

  RotateRight();
  delay(2000);  //rotate right for 2 seconds

  ForwardLeft();
  delay(2000);  //move forward diagonal left for 2 seconds

  ForwardRight();
  delay(2000);  //move forward diagonal right for 2 seconds

  BackwardLeft();
  delay(2000);  //move backward diagonal left for 2 seconds

  BackwardRight();
  delay(2000);  //move backward diagonal right for 2 seconds

  Stop();
  delay(2000);  //stop for 2 seconds

}

// FUNCTIONS TO CHANGE THE DIRECTION OF THE WHEELS
void Backward() {
  digitalWrite(in1F,LOW);
  digitalWrite(in2F,HIGH);
  digitalWrite(in3F,LOW);
  digitalWrite(in4F,HIGH);
  digitalWrite(in1B,LOW);
  digitalWrite(in2B,HIGH);
  digitalWrite(in3B,LOW);
  digitalWrite(in4B,HIGH);
}

 void Forward() {
  digitalWrite(in1F,HIGH);
  digitalWrite(in2F,LOW);
  digitalWrite(in3F,HIGH);
  digitalWrite(in4F,LOW);
  digitalWrite(in1B,HIGH);
  digitalWrite(in2B,LOW);
  digitalWrite(in3B,HIGH);
  digitalWrite(in4B,LOW);
}

void Stop() {
  digitalWrite(in1F,LOW); 
  digitalWrite(in2F,LOW); 
  digitalWrite(in3F,LOW); 
  digitalWrite(in4F,LOW); 
  digitalWrite(in1B,LOW); 
  digitalWrite(in2B,LOW); 
  digitalWrite(in3B,LOW); 
  digitalWrite(in4B,LOW); 
}

void StrafeRight() {
  digitalWrite(in1F,LOW); 
  digitalWrite(in2F,HIGH); 
  digitalWrite(in3F,HIGH); 
  digitalWrite(in4F,LOW); 
  digitalWrite(in1B,HIGH); 
  digitalWrite(in2B,LOW); 
  digitalWrite(in3B,LOW); 
  digitalWrite(in4B,HIGH); 
}

void StrafeLeft() {
  digitalWrite(in1F,HIGH); 
  digitalWrite(in2F,LOW); 
  digitalWrite(in3F,LOW); 
  digitalWrite(in4F,HIGH); 
  digitalWrite(in1B,LOW);
  digitalWrite(in2B,HIGH); 
  digitalWrite(in3B,HIGH); 
  digitalWrite(in4B,LOW); 
}

void RotateRight() {
  digitalWrite(in1F,LOW); 
  digitalWrite(in2F,HIGH); 
  digitalWrite(in3F,HIGH); 
  digitalWrite(in4F,LOW); 
  digitalWrite(in1B,LOW); 
  digitalWrite(in2B,HIGH); 
  digitalWrite(in3B,HIGH); 
  digitalWrite(in4B,LOW); 
}

void RotateLeft() {
  digitalWrite(in1F,HIGH); 
  digitalWrite(in2F,LOW); 
  digitalWrite(in3F,LOW); 
  digitalWrite(in4F,HIGH); 
  digitalWrite(in1B,HIGH); 
  digitalWrite(in2B,LOW); 
  digitalWrite(in3B,LOW); 
  digitalWrite(in4B,HIGH); 
}

void ForwardLeft() {
  digitalWrite(in1F,HIGH); 
  digitalWrite(in2F,LOW); 
  digitalWrite(in3F,LOW); 
  digitalWrite(in4F,LOW); 
  digitalWrite(in1B,LOW); 
  digitalWrite(in2B,LOW); 
  digitalWrite(in3B,HIGH); 
  digitalWrite(in4B,LOW); 
}

void ForwardRight() {
  digitalWrite(in1F,LOW); 
  digitalWrite(in2F,LOW); 
  digitalWrite(in3F,HIGH);
  digitalWrite(in4F,LOW); 
  digitalWrite(in1B,HIGH); 
  digitalWrite(in2B,LOW); 
  digitalWrite(in3B,LOW); 
  digitalWrite(in4B,LOW); 
}

void BackwardLeft() {
  digitalWrite(in1F,LOW); 
  digitalWrite(in2F,LOW); 
  digitalWrite(in3F,LOW); 
  digitalWrite(in4F,HIGH); 
  digitalWrite(in1B,LOW); 
  digitalWrite(in2B,HIGH); 
  digitalWrite(in3B,LOW); 
  digitalWrite(in4B,LOW); 
}

void BackwardRight() {
  digitalWrite(in1F,LOW); 
  digitalWrite(in2F,HIGH); 
  digitalWrite(in3F,LOW); 
  digitalWrite(in4F,LOW); 
  digitalWrite(in1B,LOW); 
  digitalWrite(in2B,LOW); 
  digitalWrite(in3B,LOW); 
  digitalWrite(in4B,HIGH); 
}













