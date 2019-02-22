/*
 * main.c
 *
 *  Created on: 8. feb. 2019
 *      Author: Bruger
 */

#include <stdio.h>

double piCalc () {
	int cycles = 10000000;
	double pi = 1;

	int fract = 1;
	for (int i = 1; i < cycles; i++) {
		fract += 2;
		if (i % 2 == 0) {
			pi += (double) 1 / fract;
		} else {
			pi -= (double) 1 / fract;
		}
	}
	pi *= 4;
	return pi;
}

int main() {
	double pi= piCalc();
	printf("%.7f\n", pi);
}


