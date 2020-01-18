#include <stdio.h>


int main()
{
    float a,b,c;
    float x1 , x2;

    float disc;

    printf("Enter coefficients a, b and c.");
    scanf("%f %f %f", &a, &b , &c);



    x1 =  ( - b + sqrt((b * b - 4 * a  * c)) ) / ( 2 * a);

    x2 = ( - b - sqrt((b * b - 4 * a  * c)) ) / ( 2 * a);

    printf("x1 : %.2f x2 : %.2f",x1,x2);


}
