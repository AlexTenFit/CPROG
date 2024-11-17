#include <stdio.h>

/*
 * print Celsius - Fahrenheit table from 0 to 150 degrees C
 */
int main()
{
	// declarations
	float fahr, celsius; 	
	int lower, upper, step;

	// assignment 
	lower = 0; // lower limit of temp table (celsius)
	upper = 150; // upper limit of temp table (celsius)
	step = 10; // step size (celsius)
	
	printf("%3c %6c\n", 'C', 'F'); // print headers for table

	celsius = lower;
	while (celsius <= upper) {
		fahr = celsius * (9.0/5.0) + 32;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	} 
	/* Starting with lower limit, calculate celsius value, print
	 * fahr and celsius with a tab apart, increase fahr by step value 
	 * and repeat until reaching upper limit 
	 */
}
