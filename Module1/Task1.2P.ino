uint8_t led_state = LOW;

void setup()
{
  	Serial.begin(9600);
	pinMode(2, INPUT);
  	pinMode(LED_BUILTIN, OUTPUT);
  	attachInterrupt(digitalPinToInterrupt(2), toggle, RISING);
}

void loop()
{
  Serial.println(digitalRead(2));
  delay(3000); // Delay a little bit to improve simulation performance
}

void toggle(){
  led_state = !led_state;
  digitalWrite(LED_BUILTIN, led_state);
}
