#include <Servo.h>
int pos = 0; // int Para definir a porta
int pot = A0;
int pot1 = A1;
int pot2 = A2;

Servo ServoMotor; // Definição do nome do servo para ServoMotor

void setup() {
  ServoMotor.attach(9); // Definição da porta
  ServoMotor.attach(10);
  ServoMotor.attach(11);
}

void loop() {
   pos = analogRead(pot); // Pegar a variavel do Potenciometro
   pos = analogRead(pot1); // Pegar a variavel do Potenciometro
   pos = analogRead(pot2); // Pegar a variavel do Potenciometro
   pos = map(pos, 0, 1023, 0, 179); // Definição do analogico para o servo
   ServoMotor.write(pos); 
   delay(100); // Delay do programa
   ServoMotor.write(pos); 
   delay(100); // Delay do programa
   ServoMotor.write(pos); 
   delay(100); // Delay do programa
}
