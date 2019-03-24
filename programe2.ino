/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  http://www.arduino.cc/en/Tutorial/Blink
*/ 
int pinled = 2;
int pinled7 = 7;
int tled = 0;
int tled2 = 0;
int ledstate = LOW;
int ledstate2 = LOW;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(pinled7, OUTPUT);
  pinMode(pinled,OUTPUT);
  tled=millis();
  tled2=millis();
}                              

// the loop function runs over and over again forever
void loop() {
  if(millis()-tled == 1000)
  {
      tled=millis();
      if(ledstate == LOW)
      {
        ledstate=HIGH;
      }
      else
      {  
        ledstate=LOW;
      }
      digitalWrite(pinled,ledstate);
  }
  if(millis()-tled2 ==200)
  {
    tled2=millis();
    if(ledstate2 == LOW)
    {
      ledstate2=HIGH;
    }
    else
    {  
      ledstate2=LOW;
    }
    digitalWrite(pinled7,ledstate2);
  }

 /* programe original
  digitalWrite(pinled7, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(3000);                       // wait for a second
  digitalWrite(pinled7, LOW);    // turn the LED off by making the voltage LOW
  delay(3000);
  digitalWrite(pinled, HIGH);// wait for a second
  delay(500);
  digitalWrite(pinled, LOW); 
  */
}
