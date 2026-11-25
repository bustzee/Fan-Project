
int ledpin = 9;
int butpin = 2;
int state;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin,OUTPUT);
  pinMode(butpin,INPUT_PULLUP);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  state = digitalRead(butpin);
  Serial.println(state);
  if (state==HIGH) {
    digitalWrite(ledpin,LOW);
  } else {
    digitalWrite(ledpin,HIGH);
  }

}
