#include <stdio.h>


int main()
{

    int n1, n2;

    printf("Enter two numbers : ");
    scanf("%d %d", &n1,&n2);

    if (n2 / n1)
        printf("false");
    else
        printf("true");
}
