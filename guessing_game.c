#include <stdio.h>

int main() {
	int guess;
	while (scanf("%d", &guess) != EOF) {
		if (guess == 42) {
			printf("Correct Guess!\n");
			break;
		}
		else if (guess < 42) printf("Too Low!\n");
		else printf("Too High!\n");
	}
}