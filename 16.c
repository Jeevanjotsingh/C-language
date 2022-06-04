// /* prgrm to find a number using linear search*/
#include <stdio.h>
void main()
{
    int n, num, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter your numbers: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the number you wnat to search: ");
    scanf("%d", &num);
    for (i = 0; i < n; i++)
    {
        if (num == arr[i])
            break;
    }
    printf("Num %d is present at index: %d", num, i);
}