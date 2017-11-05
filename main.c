#include "src/gpio.h"
#include "src/am335x.h"

int main() {

	digitalOutput(USR0);
	digitalOutput(USR1);
	digitalOutput(USR2);
	digitalOutput(USR3);
  digitalOutput(P8_8);

	while(1) {
		/* write a fancy led pattern */
		digitalWrite(P8_8, HIGH);    
		digitalWrite(USR3, HIGH);
		usleep(50000);
		digitalWrite(USR2, HIGH);
		usleep(50000);
		digitalWrite(USR1, HIGH);
		usleep(50000);
		digitalWrite(USR0, HIGH);
		usleep(50000);
 		digitalWrite(P8_8, LOW);       
		digitalWrite(USR3, LOW);
		usleep(50000);
		digitalWrite(USR2, LOW);
		usleep(50000);
		digitalWrite(USR1, LOW);
		usleep(50000);
		digitalWrite(USR0, LOW);
		usleep(50000);

		// turn on USR2 LED when P8_3 is set high
		digitalWrite(USR2, digitalRead(P8_3));

		// delay 10ms
	  	usleep(10000);
	}	
	//munmap(map, fd);	
	return 0;
}
