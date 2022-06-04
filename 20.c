// calculator using switch case and function
#include <stdio.h>
void add(float x, float y)
{
    printf("Addition of %g and %g is %g", x, y, x + y);
}
void sub(float x, float y)
{
    printf("Subtraction of %g and %g is %g", x, y, x - y);
}
void mul(float x, float y)
{
    printf("Multiplication of %g and %g is %g", x, y, x * y);
}
void div(float x, float y)
{
    printf("Division of %g and %g is %g", x, y, x / y);
}
void main()
{
    char o;
    float a, b;
    printf("Enter the operator you want to perform(+,-,*,/): ");
    scanf("%c", &o);
    printf("Enter your operands: ");
    scanf("%f %f", &a, &b);
    switch (o)
    {
    case '+':
        add(a, b);
        break;
    case '-':
        sub(a, b);
        break;
    case '*':
        mul(a, b);
        break;
    case '/':
        div(a, b);
        break;
    default:
        printf("Invalid operator: ");
    }
}