#include <stdio.h>

 int main()
 {
    int n, tens, fives, twos, ones;
    scanf("%d", &n);
    tens = n / 10;
    n = n - (tens * 10);
    fives = n / 5;
    n = n - (fives * 5);
    twos = n / 2;
    n = n - (twos * 2);
    ones = n / 1;
    n = n - (ones * 1);

    printf("%d %d %d %d", tens, fives, twos, ones);
 }
