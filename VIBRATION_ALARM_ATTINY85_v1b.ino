int pwmPin = 0;       //ATTINY85 Pin 5 PWM OUT
int analogInPin = A2; //ATTINY85 Pin 3 Analog in
bool vibe_detected = false;

void setup() {
  // put your setup code here, to run once:

   pinMode(pwmPin, OUTPUT);
   pinMode(analogInPin, INPUT);

   digitalWrite(pwmPin,LOW);
   // POWER SWITCHED ON!! Wait 10 SECONDS TO SETTLE VIBRATIONS
   delay(10000);
}

void loop() {

   int analogIn = analogRead(analogInPin); // Read analog voltage on pin 2 (A1)

   // d e t e c t  v i b r a t i o n //
   
   if ((analogIn > 512) && (!vibe_detected)) { // over 2.5 volts
      vibe_detected = true;
      pulse_call_button();
      }

   if (vibe_detected) {
      delay(20000);
      pulse_call_button();      
      vibe_detected = false;
      delay(10000); //delay 10 seconds to let things settle especially if far side radio cancelled alarm
   }

}

void pulse_call_button() {
   digitalWrite(pwmPin,HIGH);
   delay(2750); // TURN ON ALARM
   digitalWrite(pwmPin,LOW);  
}

