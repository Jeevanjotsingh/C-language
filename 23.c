// call by value and call by reference
#include <stdio.h>
void callbyvalue(int num1, int num2)
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("\nValue is num1=%d and num2=%d in call by value fn.", num1, num2);
}
void callbyreference(int *num1, int *num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    printf("\nValue is num1=%d and num2=%d in call by reference fn.", *num1, *num2);
}
void main()
{
    int num1, num2;
    printf("Enter the numbers you want to swap: ");
    scanf("%d%d", &num1, &num2);
    printf("Value is num1=%d and num2=%d in main", num1, num2);
    callbyvalue(num1, num2);
    printf("\nValue is num1=%d and num2=%d in main after call by value fn.", num1, num2);
    callbyreference(&num1, &num2);
    printf("\nValue is num1=%d and num2=%d in main after call by reference fn.", num1, num2);
}