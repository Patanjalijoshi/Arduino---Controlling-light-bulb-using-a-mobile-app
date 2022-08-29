// Controlling a light bulb using a phone app
char inByte; // initialize the variable inByte
# define relay 9 // pin that the LED is attached to

void setup() {
pinMode(relay, OUTPUT);
Serial.begin(9600);
}

void loop() {
  if(Serial.available()){
    inByte = Serial.read();
    if(inByte == '1'){
      digitalWrite(relay,HIGH);
      }
    else if(inByte == '0'){
      digitalWrite(relay,LOW);
      } 
    }
}
