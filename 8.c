// factorail of number
#include <stdio.h>
void main()
{
    int fact = 1, num;
    printf("enter the number you want factorial of: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    printf("Factorial of %d is: %d", num, fact);
}