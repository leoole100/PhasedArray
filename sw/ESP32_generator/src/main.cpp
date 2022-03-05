#include <Arduino.h>
String input;

void setup() {
	Serial.begin(115200);
	Serial.println("");
	Serial.println("Leon Oleschko 2022");
	Serial.println("");
	Serial.println("input frequency in kHz and hit enter");

	ledcSetup(0,40000, 8);
	ledcAttachPin(27, 0);
	ledcWrite(0,128);
}

void loop() {
	if(Serial.available() > 0){
		char data = Serial.read();
		Serial.print(data);
		input += data;
		if(data =='\n'){
			double freq = input.toDouble();
			ledcSetup(0, 
			freq *1000, 8);
			ledcWrite(0,128);
			input = "";
		}
	}
}