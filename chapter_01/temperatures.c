#include <stdio.h>

/*
 * print Fahrenheit-Celsius table between fahr 0-300 deg.
 */
int main()
{
	// declarations
	int fahr, celsius; 	
	int lower, upper, step;

	// assignment 
	lower = 0; // lower limit of temp table (fahrenheit)
	upper = 300; // upper limit of temp table (fahrenheit)
	step = 20; // step size (fahrenheit)
	
	fahr = lower;
	while (fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	} 
	/* Starting with lower limit, calculate celsius value, print
	 * fahr and celsius with a tab apart, increase fahr by step value 
	 * and repeat until reaching upper limit 
	 */
}
