#include <stdio.h>
#include <math.h>

int main()
{

    sqrt(3);
    int n1 , n2, sum,sub,prod,quot;

    printf("Enter any two numbers: ");
    scanf("%d %d", &n1 , &n2);

    sum = n1 + n2;
    sub = n1 - n2;
    prod = n1 * n2;
    quot = n1 / n2;

    printf("Sum : %d \n", sum);
    printf("Difference : %d \n", sub);
    printf("Product : %d \n", prod);
    printf("Quot : %d", quot);

}
