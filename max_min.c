#include <stdio.h>

int main() {
	int first = 1;
	int val, maxval, minval;
	/* EOF Character is Ctrl+Z */
	while (scanf("%d", &val) != EOF) {
		if (first || val > maxval)
			maxval = val;
		
		if (first || val < minval)
			minval = val;
		first = 0; /* 0 means False, So it initially
		assigns the first number to maxvel and minvel */
	}
	
	printf("Maximum Value %d\n", maxval);
	printf("Minimum Value %d\n", minval);
}