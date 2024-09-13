#include <stdio.h>

int main()
{
    int n, mult = 1, digit;
    scanf("%d", &n);
    int temp = n;

    while (n > 0)
    {
        digit = n % 10;
        mult *= digit;
        n = n/10;
    }

    if (temp % mult == 0)
    {
        printf("%d is a zuckerman number.", temp);
    }
    else
    {
        printf("%d is not a zuckerman number.", temp);
    }
}
