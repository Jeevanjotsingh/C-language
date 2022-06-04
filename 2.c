// arthmetic operations
#include <stdio.h>
void main()
{
    int x, y, sum, sub, mul, rem;
    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);
    sum = x + y;
    sub = x - y;
    mul = x * y;
    rem = x % y;
    printf("sum=%d\nsub=%d\nmul=%d\nrem=%d", sum, sum, mul, rem);
}