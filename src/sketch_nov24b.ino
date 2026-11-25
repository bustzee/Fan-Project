
int ledpin = 9;
int butpin = 2;
int state;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin,OUTPUT);
  pinMode(butpin,INPUT_PULLUP);
  //for printing out data
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  state = digitalRead(butpin);
  Serial.println(state);
  if (state==HIGH) {
    //Set MOSFET (ledpin) to LOW - Button Off 
    digitalWrite(ledpin,LOW);
  } else {
    //Set MOSFET (ledpin) to HIGH - Button On
    digitalWrite(ledpin,HIGH);
  }

}
