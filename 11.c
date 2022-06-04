// prgrm to chk no is prime or not
#include <stdio.h>
#include <math.h>
void main()
{
    int num, s, i = 2;
    printf("Enter your number: ");
    scanf("%d", &num);
    s = sqrt(num);
    while (i <= s)
    {
        if (num % i == 0)
            break;
        i++;
    }
    if (i == s + 1)
        printf("Prime");
    else
        printf("Not prime");
}
