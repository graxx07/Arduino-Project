#define button1 4
#define button2 3
#define button3 2
#include <Servo.h> 
 
Servo myservo;  
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
    Serial.println("1");
    myservo.attach(9);  
    Serial.println("1 attached");
    myservo.write(135);  
    delay(2000);
    Serial.println("1 moving");
    myservo.write(90);
    delay(100);
    Serial.println("1 stop");
    myservo.write(45);                 
    delay(2000);
    Serial.println("1 moving");
    myservo.detach();  
  }
  else if (buttonState2 == LOW){
    Serial.println("2");
    girl.attach(10);  
    Serial.println("2 attached");
    girl.write(135);  
    delay(2000);
    Serial.println("2 moving");
    girl.write(90);
    delay(100);
    girl.detach();
  }
  else if (buttonState3 == LOW){
    Serial.println("3");
    sink.attach(11);  
    Serial.println("3 attached");
    sink.write(85);
    sink.write(-85);
    sink.write(85);
    sink.write(-85);  
    delay(2000);
    Serial.println("3 moving");
    sink.detach();
  }
  else {
    Serial.println("Button is not pressed");
  }
  delay(100);
}
