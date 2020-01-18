#include <stdio.h>


int main()
{
    int n1,n2,n3,max;

    printf("Enter three numbers : ");
    scanf("%d %d %d",&n1,&n2,&n3);

    if(n1>n2 && n1>n3)
        printf("MAX : %d",n1);
    else if(n2>n1 && n2>n3)
        printf("MAX : %d", n2);
    else
        printf("MAX : %d", n3);

    return 0;
}
