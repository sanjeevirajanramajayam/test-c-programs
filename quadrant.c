#include <stdio.h>

main()
{
    int x, y;
    printf("Enter the coordinates:");
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0)
        printf("The coordinate is on I Quadrant");
    else if (x < 0 && y > 0)
        printf("The coordinate is on II Quadrant");
    else if (x > 0 && y < 0)
        printf("The coordinate is on III Quadrant");
    else if (x < 0 && y < 0)
        printf("The coordinate is on IV Quadrant");
    else if (x == 0 && y == 0)
        printf("The coordinate is on the origin");
    else if (x == 0)
        printf("The coordinate is on y axis");
    else if (y == 0)
        printf("The coordinate is on x axis");
}
