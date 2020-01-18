#include <stdio.h>



int main()
{

    char c;

    printf("Enter a character: ");
    c = getchar();

    if(c == 'a' || c == 'i' || c == 'e' || c == 'o' || c == 'u')
        printf("Vowel");
    else
        printf("Not Vowel");

}
