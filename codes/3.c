#include <stdio.h>


int main()
{
    float tempC, tempF;

    printf("Enter temperature in fahrenheit : ");


    scanf("%f",&tempF);

    tempC = (tempF - 32) / 1.8;

    printf("The temperature in celsius is %.2f",tempC);


}

