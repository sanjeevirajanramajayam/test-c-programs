#include <stdio.h>

int main()
{
    int a, b;
    a = 10;
    b = 15;
    printf("%d %d\n", a, b);
    swap(&a, &b);
    printf("%d %d", a, b);
}

int swap(px, py)
int *px, *py;
{
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
}
