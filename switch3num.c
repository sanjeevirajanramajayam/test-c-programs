#include <stdio.h>

 int main()
 {
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    int biggest = 0;

    printf("Enter first number :");
    scanf("%d", &n1);
    printf("Enter second number :");
    scanf("%d", &n2);
    printf("Enter third number :");
    scanf("%d", &n3);

    switch(n1 > n2)
    {
    case 0:
        biggest = n2;
    case 1:
        biggest = n1;
    }

    switch(n3 > biggest)
    {
    case 0:
        biggest = biggest;
    case 1:
        biggest = n3;
    }

    printf("Biggest number %d", biggest);

 }

