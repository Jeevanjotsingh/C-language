//  area and perimeter of circle,square and rect
#include <stdio.h>
void main()
{
    float a, b, a1, a2, a3, p1, p2, p3;
    printf("enter lenght/side/radius: ");
    scanf("%f", &a);
    printf("enter breadth/else enter 0: ");
    scanf("%f", &b);
    a1 = a * a;
    a2 = a * b;
    a3 = 3.14 * a * a;
    p1 = 4 * a;
    p2 = 2 * (a + b);
    p3 = 2 * 3.14 * a;
    printf("area of square is %.2f and perimeter of square is %.2f\n", a1, p1);
    printf("area of rectangle is %.2f and perimeter of rectangle is %.2f\n", a2, p2);
    printf("area of circle is %.2f and perimeter of circle is %.2f", a3, p3);
}