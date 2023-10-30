byte seven_seg_digits[4][7] = {
{0,0,0,1,1,1,0},
{1,1,1,1,1,1,0},
{1,0,0,1,1,1,0},
{1,1,1,1,1,1,0},
};

void sevenSegWrite(byte digit) {
  byte pin = 2;
  for (byte segCount = 0; segCount < 7; ++segCount) 
  {
    digitalWrite(pin, seven_seg_digits[digit][segCount]);
    ++pin;
  }
  delay(5);
}

void setup () {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  byte count = 0;
  for(byte x = 13; x >= 10; x = x -1) {
    digitalWrite(x, HIGH);
    sevenSegWrite(count);
    count = count + 1;
    digitalWrite(x, LOW);
    delay(3);
  }
  delay(5);
}
