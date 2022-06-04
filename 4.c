// euclidean distance
#include <stdio.h>
#include <math.h>
void main()
{
    float x1, y1, x2, y2, d;
    printf("enter coordinates of the 1 point: ");
    scanf("%f%f", &x1, &y1);
    printf("enter coordinates of the 2 point: ");
    scanf("%f%f", &x2, &y2);
    d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    printf("euclidean distance between two points is %.3f", d);
}