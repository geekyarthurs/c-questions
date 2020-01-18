#include <stdio.h>


int main()
{

    int year;

    printf("Enter year : ");
    scanf("%d", & year);

    if (year % 4)
        printf("false");
    else
        printf("true");
}
