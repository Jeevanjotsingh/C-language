// program to find the maximum element and index in the array.
#include <stdio.h>
void main()
{
    int i, n, max = 0, index;
    printf("Enter the number of elements you want to enter: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter your numbers: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            index = i;
        }
    }
    printf("Max number is %d having index %d", max, index);
}
