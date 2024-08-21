#include <stdio.h>

/* print Fahrenheit-Celsius table
for f = 0, 20, ..., 300 */

int main()
{
	int lower, upper, step;
	float fahr, celsius;
	lower = 0;
	step = 20;
	upper = 300;
	fahr = lower;

	while (fahr <= upper) {
		/* 5/9 returns zero to return a integer */
		celsius = (5.0/9.0) * (fahr - 32); /* 5.0/9.0 returns a float */
		printf("%4.0f %6.1f\n", fahr, celsius);
		/* %4.0 represents 4 integer spaces and zero decimal spaces */
		/* %6.1 represents 6 integer spaces and one decimal slace*/
		fahr += step;

	}

}