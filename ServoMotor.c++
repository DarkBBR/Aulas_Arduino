#include <Servo.h>
int pos = 0; // int Para definir a porta
int pot = A0;

Servo ServoMotor; // Definição do nome do servo para ServoMotor

void setup() {
  ServoMotor.attach(9); // Definição da porta
}

void loop() {
   pos = analogRead(pot); // Pegar a variavel do Potenciometro
   pos = map(0, 1023, 0, 179); // Definição do analogico para o servo
   ServoMotor.write(pos); 
   delay(100); // Delay do programa
}
