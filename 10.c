// max of n numbers using for loop

#include <stdio.h>
void main()
{
    int max = 0, n, num;
    printf("Enter how many numbers do you want to  input: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("Enter your numbers: ");
        scanf("%d", &num);
        if (max < num)
            max = num;
    }
    printf("Max no. is %d", max);
}