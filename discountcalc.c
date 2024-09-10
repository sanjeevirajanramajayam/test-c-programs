#include <stdio.h>

main()
{
    float op, dp;
    printf("Original Price = $");
    scanf("%f", &op);
    printf("Discount Percentage = %");
    scanf("%f", &dp);

    if (op < 0)
    {
        printf("\nOriginal Price is less than zero.\n");
    }

    if (dp < 0)
    {
        printf("\nDiscount Percentage is less than zero.\n");
    }

    printf("\nOriginal Price = $%0.1f\n", op);
    printf("Discount Percentage = %0.1f\n", dp);
    op = (100 - dp) * (op / 100);
    printf("Discounted Price = $%0.1f\n", op);
}
