#include <stdio.h>


int main()
{

    int num, firstDigit, lastDigit;
    int sum;

    printf("Enter the number : ");
    scanf("%d", &num);

    lastDigit = num % 10;

    while(num >= 10){
        num = num / 10;
    }

    firstDigit = num;

    sum = firstDigit + lastDigit;

    printf("First Digit : %d \n", firstDigit);
    printf("Last Digit : %d", lastDigit);
    printf("Sum : %d", sum);

}


