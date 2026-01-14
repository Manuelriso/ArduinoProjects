#include "SR04.h"
#define TRIG_PIN 12
#define ECHO_PIN 11
#define LED 5
SR04 sr04 = SR04(ECHO_PIN,TRIG_PIN);
long a;
static int ledActive=0;

void setup() {
   Serial.begin(9600);
   pinMode(LED, OUTPUT);
   delay(1000);
}

void loop() {
   a=sr04.Distance();
   Serial.print(a);
   Serial.println("cm");
   if(a<50 && ledActive==0){
      digitalWrite(LED, HIGH);
      ledActive=1;
   }

   else if(a>=50 && ledActive==1){
      digitalWrite(LED, LOW);
      ledActive=0;
   }

   delay(1000);
}
