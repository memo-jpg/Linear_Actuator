const int forwards = 7;
const int backwards = 6;//assign relay INx pin to arduino pin

void setup() {
pinMode(forwards, OUTPUT);//set relay as an output
pinMode(backwards, OUTPUT);//set relay as an output
}

void loop() {
digitalWrite(forwards, HIGH);
digitalWrite(backwards, HIGH);//Deactivate both relays to brake the motor
delay(2000);// wait 2 seconds
}
