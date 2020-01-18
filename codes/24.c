#include <stdio.h>

int main()
{
    int cp, sp;

    printf("Enter cost price and selling price.");
    scanf("%d %d", &cp, &sp);

    if(cp > sp)
        printf("The loss is %d.",cp-sp);
    else
        printf("The profit is %d.",sp-cp);
}
