// fact using recursion
#include <stdio.h>
int fact(int n)
{
    if (n >= 1)
        return n * fact(n - 1);
    else
        return 1;
}
void main()
{
    int num, f;
    printf("Enter the number you want fact. of: ");
    scanf("%d", &num);
    printf("fact. of %d is %d", num, fact(num));
}