#include <stdio.h>

 int main()
 {
     int n;
     int sum = 0;
     while (n != -1)
    {
        scanf("%d", &n);

        if (n % 2 ==0)
        {
            sum += n;
        }
    }
    printf("Sum of all even numbers : %d", sum);
 }
