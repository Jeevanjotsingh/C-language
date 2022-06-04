// prgrm to sort an array using insertion sort
#include <stdio.h>
int main()
{
    int i, j, temp, size;
    printf("Enter number of elements you want in your array : ");
    scanf("%d", &size);
    int arr[size];
    for (i = 0; i < size; i++)
    {
        printf("Enter the %d element of the array : ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    for (i = 1; i <= size - 1; i++)
    {
        j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }
    printf("\nSorted list in ascending order:\n");
    for (i = 0; i <= size - 1; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}