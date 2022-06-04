// vovel or consonent
#include <stdio.h>
void main()
{
    char i;
    printf("enter your alphabet: ");
    scanf("%i", &i);
    if (i == 'a' || i == 'A' || i == 'e' || i == 'E' || i == 'i' || i == 'I' || i == 'o' || i == 'O' || i == 'u' || i == 'U')
        printf("vowel");
    else
        printf("consonent");
}