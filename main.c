/*
 * main.c
 *
 *  Created on: 14/08/2013
 *      Author: cuki
 */
#include<18F46K20.h>

#FUSES HS
#USE delay(clock=4MHz)

int cont;
int data[17] = {

};

int main(void) {
	while (TRUE) {
		output_c(data++);
		for (cont = 0; cont < 8; cont++) {
			output_d(cont);
			delay_ms(100);
		}
	}
	return 0;
}

