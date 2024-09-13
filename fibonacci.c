#include <stdio.h>

 int main()
 {
     int n = 0;
     int x = 0;
     int y = 1;
     int z = 0;
     scanf("%d", &n);
     if (n > 2)
     {
        n = n - 2;
        printf("%d\n%d\n", x, y);
     }
     else if (n == 1)
     {
         printf("%d", x);
     }
     else if (n == 2)
     {
         printf("%d\n%d\n", x, y);
     }

     while (n != 0)
    {
        z = x + y;
        x = y;
        y = z;
        //printf("%d\n", x);
        printf("%d\n", y);
        n = n - 1;
    }
 }

