#include <stdio.h>

int main()
{
    int cp;
    int sp;
    int tp;
    printf("Cost Price:\n");
    scanf("%d", &cp);
    printf("Selling Price:\n");
    scanf("%d", &sp);
    tp = sp - cp;
    if (sp > cp )
        printf("Profit %d", tp);
    else
        printf("Loss %d", tp);
}
