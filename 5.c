// even or odd
#include <stdio.h>
void main()
{
    int i;
    printf("Enter the number: ");
    scanf("%d", &i);
    if (i & 1)
        printf("%d is odd", i);
    else
        printf("%d is even", i);
}