#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year = 0;
    scanf("%d", &year); // Use double quotes.

    if (year % 4 == 0 && year % 100 != 100 || year % 400 == 0)
        printf("%d is a leap year!", year);
    else
        printf("%d is not a leap year!", year);
}
