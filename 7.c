// area and perimeter
#include <stdio.h>
void main()
{
    int choice;
    float rad, side, len, bre;
    printf("1.Circle");
    printf("\n2.Square");
    printf("\n3.Rectangle: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter the radius of circle: ");
        scanf("%f", &rad);
        printf("Area=%g\nPerimeter=%g", 3.14 * rad * rad, 2 * 3.14 * rad);
        break;
    case 2:
        printf("Enter the side of square: ");
        scanf("%f", &side);
        printf("Area=%g\nPerimeter=%g", side * side, 4 * side);
        break;
    case 3:
        printf("Enter the length and breadth of rectangle:\n");
        scanf("%f%f", &len, &bre);
        printf("Area=%g\nPerimeter=%g", len * bre, 2 * (len + bre));
        break;
    default:
        printf("Invalid");
    }
}
