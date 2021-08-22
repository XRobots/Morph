#include <Servo.h>

int count1;

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;
Servo servo7;
Servo servo8;

void setup() {

  servo1.attach(2);
  servo2.attach(3);
  servo3.attach(4);
  servo4.attach(5);
  servo5.attach(6);
  servo6.attach(7);
  servo7.attach(8);
  servo8.attach(9);

  servo1.write(90); 
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
  servo5.write(90);
  servo6.write(90);
  servo7.write(90);
  servo8.write(90);

  delay(2000);

}

void loop() {

  while(count1 <= 7) {
  
    servo1.write(50);     // outwards
    servo7.write(50);

    servo3.write(130);    // inwards
    servo5.write(130);
  
    delay(600);

    servo1.write(130);     // outwards
    servo7.write(130);

    servo3.write(50);    // inwards
    servo5.write(50);

    delay (600);
  
    count1 = count1 + 1;

  }
  
    servo1.write(90); 
    servo2.write(90);
    servo3.write(90);
    servo4.write(90);
    servo5.write(90);
    servo6.write(90);
    servo7.write(90);
    servo8.write(90);





}
