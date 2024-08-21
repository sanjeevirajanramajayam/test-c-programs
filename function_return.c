#include <stdio.h>

int main() {
	int retval(), val;
	val = retval(6, 7);
	printf("Value %d\n", val);
}

int retval(a, b) 
	int a,b; /* Define a,b types before function definition */
{
	int c = a*b;
	return c;
};