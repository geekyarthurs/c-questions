#include <stdio.h>


int main()
{

    int input, i , sum = 0;

    printf("Enter the number : ");
    scanf("%d", &input);
    i = input;

    while(i > 0){
        sum += (i % 10) * (i % 10) * (i % 10);
        i /= 10;
    }

    if(sum == input)
        printf("It's armstrong number.");
    else
        printf("Its' not armstrong number.");
}


