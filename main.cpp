#include <stdio.h>
#include <string>
#include "mbed.h"

AnalogIn Ain1(P0_23);
AnalogIn Ain2(P0_24);
PwmOut pwm1(P2_0);
PwmOut pwm2(P2_1);

int main() {
	bool t1down = false;
	bool t2down = false;
	float sensorValue1 = 0.0;
	float sensorValue2 = 0.0;
	pwm1.pulsewidth_us(1500);
	pwm2.pulsewidth_us(1500);

	while (1) {
		sensorValue1 = Ain1.read();
		sensorValue2 = Ain2.read();

		if (t1down && t2down) {
			wait(2);
			pwm1.pulsewidth_us(1500);
			pwm2.pulsewidth_us(1500);
			sensorValue1 = 0.0;
			sensorValue2 = 0.0;
			t1down = false;
			t2down = false;
			wait(2);
		}

		if (sensorValue1 >= 0.50) {
			pwm1.pulsewidth_us(600);
			t1down = true;
		}

		if (sensorValue2 >= 0.50) {
			pwm2.pulsewidth_us(600);
			t2down = true;
		}
	}

	return 0;
}
