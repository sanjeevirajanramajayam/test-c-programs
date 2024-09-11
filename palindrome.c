#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num, i, digit, sum=0;
    char s[20];
    scanf("%d", &num);

    sprintf(s, "%d", num); // Changes num to string s

    for (i=1; i <= strlen(s); i++){
        digit = num % 10;
        sum = (sum * 10) + digit;
        num = num / 10;
    }

    printf("%d", sum);
}
