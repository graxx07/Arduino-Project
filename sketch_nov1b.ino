#define button1 4
#define button2 3
#define button3 2
#include <Servo.h> 
 
Servo myservo;  // create servo object to control a servo
Servo girl;
Servo sink;

void setup() 
{
  Serial.begin(9600);
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
}

void loop() 
{
  byte buttonState1 = digitalRead(button1);
  byte buttonState2 = digitalRead(button2);
  byte buttonState3 = digitalRead(button3);

  if(buttonState1 == LOW){
    Serial.println("pussy!");
    myservo.attach(9);  // attaches the servo on pin 9 to the servo object
    Serial.println("fuck!");
    myservo.write(135);  // Values below 90 rotate one way, values above 90 rotate the other
    delay(2000);
    Serial.println("shit!");
    myservo.write(90);
    delay(100);
    Serial.println("damn!");
    myservo.write(45);                 // rotate clockwise full speed
    delay(2000);
    Serial.println("bitch!");
    myservo.detach();  // Stop the rotation
  }
  else if (buttonState2 == LOW){
    Serial.println("penis");
    girl.attach(10);  // attaches the servo on pin 9 to the servo object
    Serial.println("fuck!");
    girl.write(135);  // Values below 90 rotate one way, values above 90 rotate the other
    delay(2000);
    Serial.println("shit!");
    girl.write(90);
    delay(100);
    girl.detach();
  }
  else if (buttonState3 == LOW){
    Serial.println("boobs");
    sink.attach(11);  // attaches the servo on pin 9 to the servo object
    Serial.println("fuck!");
    sink.write(85);
    sink.write(-85);
    sink.write(85);
    sink.write(-85);  // Values below 90 rotate one way, values above 90 rotate the other
    delay(2000);
    Serial.println("shit!");
    sink.detach();
  }
  else {
    Serial.println("Button is not pressed");
  }
  delay(100);
}