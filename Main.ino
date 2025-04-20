int echopin = 8; // connect echopin to pin 8
int trigpin = 7; // connect trigpin to pin 7
long duration;
int distance;

void setup() {
Serial.begin(9600);
pinMode (echopin,INPUT); //echopin takes input
pinMode (trigpin,OUTPUT); //trigpin gives output

}

void loop() {

digitalWrite(trigpin, LOW);
delayMicroseconds(2);
digitalWrite(trigpin,HIGH);
delayMicroseconds(10);
digitalWrite (trigpin, LOW);

duration = pulseIn(echopin, HIGH);

distance= duration*0.034/2; // formula of converting distance in cm format

Serial.println(distance); // printing distance

}