int switchState = 0;

void setup() {
	pinMode(3, OUTPUT);
	pinMode(4, OUTPUT);
	pinMode(5, OUTPUT);
	pinMode(2, OUTPUT);
}
void loop() {
	switchState = digitalRead(2);
	if (switchState == LOW) {
	digitalWrite(3, HIGH); //green
	digitalWrite(4, LOW);  //red
	digitalWrite(5, LOW);  //red
}
else {
	digitalWrite(3, LOW); 
	digitalWrite(3, LOW); 
	digitalWrite(3, HIGH); 

	delay(250);
	digitalWrite(4, HIGH);
	digitalWrite(5, LOW);
	delay(250);


	}
}
