
#include <PWMServo.h>

//create servo objects
PWMServo servo1;
PWMServo servo2;
PWMServo servo3;
PWMServo servo4;
PWMServo servo5;
PWMServo servo6;
PWMServo servo7;
PWMServo servo8;
PWMServo servo9;
PWMServo servo10;

// the setup function runs once when you press reset or power the board
void setup() {

  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(38400);

  pinMode(5, OUTPUT);
  servo1.attach(5);
  servo1.write(150);

  pinMode(6, OUTPUT);
  servo2.attach(6);
  servo2.write(95);

  pinMode(7, OUTPUT);
  servo3.attach(7);
  servo3.write(95);

  pinMode(8, OUTPUT);
  servo4.attach(8);
  servo4.write(95);

  pinMode(9, OUTPUT);
  servo5.attach(9);
  servo5.write(95);

  pinMode(10, OUTPUT);
  servo6.attach(10);
  servo6.write(95);

  pinMode(11, OUTPUT);
  servo7.attach(11);
  servo7.write(95);

  pinMode(12, OUTPUT);
  servo8.attach(12);
  servo8.write(95);
  
}

// the loop function runs over and over again forever
void loop() {

  Serial.println("Hello World");

  servo1.write(30);
  servo2.write(30);
  servo3.write(30);
  servo4.write(30);
  servo5.write(30);
  servo6.write(30);
  servo7.write(30);
  servo8.write(30);
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);

  servo1.write(125);                  // wait for a second
  servo2.write(125);  
  servo3.write(125);  
  servo4.write(125); 
  servo5.write(125);
  servo6.write(125);
  servo7.write(125);
  servo8.write(125);

  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second
}
