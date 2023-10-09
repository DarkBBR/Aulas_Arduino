#include <Servo.h>
int pos = 0; // int Para definir a porta
int pos1 = 1; // int Para definir a porta
int pos2 = 2; // int Para definir a porta
int pot = A0;
int pot1 = A1;
int pot2 = A2;

Servo ServoMotor; // Definição do nome do servo para ServoMotor
Servo ServoMotor1; // Definição do nome do servo para ServoMotor
Servo ServoMotor2; // Definição do nome do servo para ServoMotor

void setup() {
  ServoMotor.attach(9); // Definição da porta
  ServoMotor1.attach(10);
  ServoMotor2.attach(11);
}

void loop() {
  
  pos = analogRead(pot); // Pegar a variavel do Potenciometro
   pos1 = analogRead(pot1); // Pegar a variavel do Potenciometro
   pos2 = analogRead(pot2); // Pegar a variavel do Potenciometro
  
   pos = map(pos, 0, 1023, 0, 179); // Definição do analogico para o servo
   pos1 = map(pos1, 0, 1023, 0, 179); // Definição do analogico para o servo
   pos2 = map(pos2, 0, 1023, 0, 179); // Definição do analogico para o servo
  
  ServoMotor.write(pos); 
   delay(100); // Delay do programa
  
  ServoMotor1.write(pos1); 
   delay(400); // Delay do programa
  
  ServoMotor2.write(pos2); 
   delay(900); // Delay do programa
}
