#include <stdio.h>


int main()
{


    int num;

    printf("Enter number : ");
    scanf("%d",&num);

    if(num % 2)
        printf("odd");
    else
        printf("even");
}
