#include <Arduino.h>
#include <Servo.h>
#include <stdlib.h>

#define SERVO1 5

Servo servo1;


void setup() {
    servo1.attach(SERVO1);
}


void loop() {
    servo1.write(rand()%181);
    delay(200);
}

