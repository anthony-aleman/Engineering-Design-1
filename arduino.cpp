const int inductiveProximitySensorPin = 8;/* initialize pin 4 for the sensor*/
const int relayPin = 4;/* initialize pin 8 for the relay*/
int reading; /*Will read the status of the arduino pin, either high or low*/

void setup() {
  Serial.begin(9600);/*prepares data rate of 9600 bits per second*/
  pinMode(relayPin,OUTPUT);/*relay used for controlling the solenoid valve thus an output*/
  digitalWrite(relayPin,HIGH);/* keep solenoid valve and relay at an OFF state*/
  
  pinMode(inductiveProximitySensorPin, INPUT);/*sensor is used for detecting the presence of a metal*/
  digitalWrite(inductiveProximitySensorPin,LOW);/* when no metal is detected then there will be no current*/
 

}

void loop() {
  reading = digitalRead(inductiveProximitySensorPin);

  if(reading == HIGH)
  {
    digitalWrite(relayPin,LOW);
    
}
if(reading == LOW){
  digitalWrite(relayPin, HIGH);
}
}