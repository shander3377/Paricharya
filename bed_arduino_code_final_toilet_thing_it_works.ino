#include <Servo.h>

Servo myservo;
Servo myservo2;
void setup() {
  Serial.begin(9600);
      myservo.write(0);
      myservo2.write(0);

  myservo.attach(11);
  myservo2.attach(9);
}
void open(){
  int t=0;
  if(t==0){
      myservo.write(150);
        delay(3000);
           myservo2.write(150);
           t=1;

  }

}

void close(){
  int f=0;
  if(f==0){
      myservo2.write(0);
            delay(3000);
           myservo.write(0);
           f=1;
  delay(1000);
  }

}
void loop() {
      if (Serial.available()) {
      String data = Serial.readStringUntil('\n'); // Rad the incoming data until newline character
      Serial.println(data);
      Serial.println(data.length());
      if(data.length() > 0){
if(data.length()==5){
  open();
} 
if(data.length()==6){
  close();
} 
      }   
  }
}

  // myservo.write(0);
  // delay(1000);
  // myservo.write(180);
  // delay(1000);
  // myservo2.write(180);
  // delay(1000);
  // myservo2.write(0);
  // delay(1000);
  
// }
