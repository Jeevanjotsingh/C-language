// Program to print the Fibonacci sequence using for loop
#include <stdio.h>
void main()
{
    int num, series, t1 = 0, t2 = 1;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Finbonacci series is: ");
    printf("%d %d ", t1, t2);
    for (int i = 2; i < num; i++)
    {
        series = t1 + t2;
        printf("%d ", series);
        t1 = t2;
        t2 = series;
    }
}