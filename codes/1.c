#include <stdio.h>

#define PI 3.14

int main()
{
    float radius, area, circum;

    printf("Enter radius : ");
    scanf("%f",&radius);

    area = PI * radius * radius;

    circum = 2 * PI * radius;



    printf("The Area is : %.2f \n", area);
    printf("The Circumference is : %.2f",circum);


}
