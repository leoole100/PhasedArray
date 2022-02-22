#include <Arduino.h>

void setup() {
  ledcSetup(0,40000, 8);
  ledcAttachPin(16, 0);
  ledcWrite(0,128);
}

void loop() {
	for (size_t i = 0; i < 128; i++){
		  ledcWrite(0,i);
		  delayMicroseconds(10);
	}
	for (size_t i = 128; i > 0; i--){
		  ledcWrite(0,i);
		  delayMicroseconds(10);
	}
	delay(20);
  
}