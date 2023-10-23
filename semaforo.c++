int passo = 1;
int vermelho = 12;
int amarelo = 11;
int verde = 10;
int botao = 2;

void setup () {
  attachInnterrupt(0, VERM, RISING);
  pinMode(botao, INPUT);
  pinMode(verde, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(vermelho, OUTPUT);
}

void VERM () {
  delay(500);
  p1();
  passo = 1;
}

void p3 () {
  digitalWrite(vermelho, LOW);
  digitalWrite(amarelo, LOW);
  digitalWrite(verde, LOW);
}

void p2() {
  digitalWrite(vermelho, LOW);
  digitalWrite(amarelo, LOW);
  digitalWrite(verde, HIGH);
}

void p1 () {
  digitalWrite(vermelho, HIGH);
  digitalWrite(amarelo, LOW);
  digitalWrite(verde, LOW);
}

void loop () {
  if (passo == 1) {
    p1();
    passo = 2;
    delay(5000);
  }

  if (passo == 2) {
    p2();
    passo = 3;
    delay(5000)
  }

  if (passo == 3) {
    p3();
    passo = 1;
    delay(5000);
  }
} 
