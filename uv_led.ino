int RXLED = 17;
int SW = 15;
int LED1 = 7;
int LED2 = 14;

void setup() {
  // put your setup code here, to run once:
  pinMode(SW, INPUT);
  // led
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(RXLED, OUTPUT);
}

boolean is_pushed = false;
boolean is_run = false; // 照射中フラグ

const unsigned long FIFTEEN_MINUITE = 15L * 60L * 1000L;

void off() {
    digitalWrite(RXLED, LOW);
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    is_pushed = false;
    is_run = false;
}

void on() {
  TXLED1;
  digitalWrite(RXLED, HIGH);
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
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
  if (digitalRead(SW) == LOW) {
    off();
  } else {
    on();
  }
}
