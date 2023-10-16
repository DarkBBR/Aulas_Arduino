#include <Servo.h>
Servo ServoMotor; // Definição do nome do servo para ServoMotor

int ldr = A0;
int ledverde = 12;
int ledvermelho = 11;

int iluminação = 500;

void setup() {
  ServoMotor.attach(9); // Definição da porta
  pinMode(ledverde, OUTPUT);
  pinMode(ledvermelho, OUTPUT);
}

void loop() {  
  int ldrValor = analogRead(ldr);
   

  if (ldrValor < iluminação) {
    ServoMotor.write(90);
    digitalWrite(ledverde, HIGH);
    digitalWrite(ledvermelho, LOW);
  } else {
    ServoMotor.write(0);
    digitalWrite(ledverde, LOW);
    digitalWrite(ledvermelho, HIGH);
  }
   delay(1000); // Delay do progra
}
