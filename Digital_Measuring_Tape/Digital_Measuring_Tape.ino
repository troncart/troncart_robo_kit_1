/*********TACHLOG powered********
*********www.troncart.com*******
**electronics components online**
*https://github.com/troncart*********
***********Digital Measuring Tape_V1.1***
***********24-09-2020**************
*/

int trigPin = 12; //intializing trigger pin for ultrasonic sound sensor
int echoPin = 13;//intializing echo pin for ultrasonic sound sensor
long duration, distance;
// the setup function runs once when you press reset or power the board

void setup()// intializing the pin mode of arduino 
{
  pinMode(echoPin,INPUT);
  pinMode(trigPin,OUTPUT);
  Serial.begin(9600);// to begin serial monitor
}



    void loop() // the loop function runs over and over again forever 
      {
        digitalWrite(trigPin, LOW);
        delayMicroseconds(2);   
        digitalWrite(trigPin, HIGH);     // send waves for 10 us
        delayMicroseconds(10);
        duration = pulseIn(echoPin, HIGH); // receive reflected waves
        distance = (duration*0.034)/2;   // convert to distance
        delay(10);
        Serial.print("LENGTH : ");
        Serial.println(distance);
      }
