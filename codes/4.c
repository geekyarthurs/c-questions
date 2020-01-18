#include <stdio.h>


int main()
{
    float tempC, tempF;

    printf("Enter temperature in celsius : ");


    scanf("%f",&tempC);

    tempF = 1.8 * tempC + 32;

    printf("The temperature in fahrenheit : %.2f",tempF);


}

