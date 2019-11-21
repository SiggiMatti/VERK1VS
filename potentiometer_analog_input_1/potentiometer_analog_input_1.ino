int sensorValue = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  // read the value from the sensor
  sensorValue = analogRead(A0);
  // turn the LED on
  if (sensorValue > 800){
    digitalWrite(13, HIGH);
  }
   else {
    digitalWrite(13, LOW);
   } 
  }
