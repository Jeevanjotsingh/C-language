// prgrm to check sum of digits of a number using while
#include <stdio.h>
void main()
{
    int num, sum = 0, rem;
    printf("Enter your number: ");
    scanf("%d", &num);
    while (num != 0)
    {
        rem = num % 10;
        sum += rem;
        num /= 10;
    }
