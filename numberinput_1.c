#include <stdio.h>

int main() {
	int usf, euf;
	printf("Enter US Floor ");
	scanf("%d", &usf);
	euf = usf - 1;
	printf("EU Floor %d", euf);
}