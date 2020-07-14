int temp = 0;

void setup()
{
  	Serial.begin(9600);
	pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  double temp = analogRead(A0);
  Serial.println(temp);
  
  if(temp > 200){
    digitalWrite(LED_BUILTIN, HIGH);
  }
  else{
  	digitalWrite(LED_BUILTIN, LOW);
  }
    delay(10); // Delay a little bit to improve simulation performance
}
