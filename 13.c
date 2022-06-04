// prgrm for armstrong number using while loop
#include <stdio.h>
#include <math.h>
void main()
{
    int num, rem, temp = 0, b = 0, sum;
    printf("Enter your number: ");
    scanf("%d", &num);
    sum = num;
    rem = num;
    while (rem != 0)
    {
        rem /= 10;
        ++temp;
    }
    while (num != 0)
    {
        rem = num % 10;
        b += pow(rem, temp);
        num /= 10;
    }
    if (sum == b)
        printf("Armstrong number");
    else
        printf("Not an armstrong number");
}