
#include <stdio.h>


int main()
{


    int num;

    printf("Enter number : ");
    scanf("%d",&num);

    if(num % 3)
        printf("not divisible");
    else
        printf("divisible");
}
