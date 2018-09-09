int RXLED = 17;
void setup() {
  // put your setup code here, to run once:
  pinMode(14, INPUT);
//  pinMode(15, OUTPUT);
//  pinMode(16, OUTPUT);
  pinMode(RXLED, OUTPUT);
}

boolean is_pushed = false;
boolean is_run = false; // 照射中フラグ

const unsigned long FIFTEEN_MINUITE = 15L * 60L * 1000L;

void off() {
    digitalWrite(RXLED, LOW);
//    digitalWrite(15, LOW);
//    digitalWrite(16, LOW);
    TXLED0;
    is_pushed = false;
    is_run = false;
}

void on() {
  digitalWrite(RXLED, HIGH);
//  digitalWrite(15, HIGH);
//  digitalWrite(16, HIGH);
  TXLED1;
  is_pushed = true;
  is_run = true;
  // switch released?
  if (is_pushed) {
    // タイマー処理
    delay(FIFTEEN_MINUITE);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(14) == LOW) {
    off();
  } else {
    on();
  }
}
