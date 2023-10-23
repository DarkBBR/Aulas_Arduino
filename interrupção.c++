#define pinoLed 13
volatile int state = LOW;
volatile int state1 = LOW;

void setup () {
  pinMode(pinoLed, OUTPUT);
  attachIntrrupt(0, blink, RISING);
}

void loop() {
  digitalWrite(pinoLed, state);
}

void blink() {
  if (state == state1) {
    state = !state1;
  } else {
    state = state1;
  }
}
