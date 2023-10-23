#define pinoLed 13
volatitle int state = LOW;
volatitle int state 1 = LOW;

void setup () {
  pinMode(pinoLed, OUTPUT);
  attachIntrrupt(0, blink, RISING);
}

void loop() {
  digitalWrite(pinoLed, state);
}

void blink() {
  if (state == 1) {
    state = !state 1;
  } else {
    state = state 1;
  }
}
