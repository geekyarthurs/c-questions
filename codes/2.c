#include <stdio.h>


int main()
{
    int t;
    float p,r,si;

    printf("Enter principle, time and rate : ");


    scanf("%f %d %f",&p,&t,&r);

    si = (p * t * r) / 100.;

    printf("The simple interest is %.2f",si);


}
