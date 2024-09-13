#include <stdio.h>

 int main()
 {
     int n;
     int flag = 0;
     scanf("%d", &n);
     if (n > 1)
     {
        for (int i = 2; i < n; i++)
            if (n % i == 0)
            {
                flag = 1;
            }
        if (flag == 1)
        {
            printf("Not Prime Number");
        }
        else
        {
            printf("Prime Number");
        }
     }
     else
     {
        printf("Invalid Input");
     }

 }
