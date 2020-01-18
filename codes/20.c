#include <stdio.h>


int main()
{
  int a1 , a2 , a3;


  printf("Enter three angles : ");
  scanf("%d %d %d",&a1,&a2,&a3);

  if(a1 == 90 || a2 == 90 || a3 == 90)
      printf("Right angled triangle");
    else
        printf("not right angled traingle");

}
