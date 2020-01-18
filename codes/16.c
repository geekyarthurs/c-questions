

#include <stdio.h>


int main()
{


    int num;

    printf("Enter number : ");
    scanf("%d",&num);

    if(num % 5 && (num % 11))
        printf("not divisible");
    else
        printf("divisible");
}

