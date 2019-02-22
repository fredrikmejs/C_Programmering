/*
 * main.c
 *
 *  Created on: 8. feb. 2019
 *      Author: Bruger
 */

#include <stdio.h>

double piCalc();

/**
 * The main function of the program
 * @return 0 if successful
 */
int main() {
	double pi = piCalc();
	printf("%.7f\n", pi); //Prints pi with 7 decimal points
}

/**
 * uses the algorithm we were given to approximate pi
 * @return an approximation of pi
 */
double piCalc () {
	int cycles = 10000000; //The number of cycles it runs to approximate pi
	double pi = 1;

	int fract = 1; //The denominator of the fraction
	for (int i = 1; i < cycles; i++) {
		fract += 2;

		//Alternates between adding and subtracting the fraction every cycle
		if (i % 2 == 0) {
			pi += (double) 1 / fract;
		} else {
			pi -= (double) 1 / fract;
		}
	}
	pi *= 4; //The above code equals pi/4, we multiply to get pi
	return pi;
}
