/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/ 
int pinled=2;
int pinled7=7;
int tled=0;
int tled2=0;
int ledstate=LOW;
int ledstate2=LOW;
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

if(millis()-tled ==1000){
    tled=millis();
    if(ledstate == LOW){
      ledstate=HIGH;
    }
  else
    {  
  ledstate=LOW;
    }
  digitalWrite(pinled,ledstate);
  }
if(millis()-tled2 ==200){
    tled2=millis();
    if(ledstate2 == LOW){
      ledstate2=HIGH;
    }
  else
    {  
  ledstate2=LOW;
    }
  digitalWrite(pinled7,ledstate2);
  }

 /* 
  digitalWrite(pinled7, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(3000);                       // wait for a second
  digitalWrite(pinled7, LOW);    // turn the LED off by making the voltage LOW
  delay(3000);
  digitalWrite(pinled, HIGH);// wait for a second
delay(500);
digitalWrite(pinled, LOW); */
}
