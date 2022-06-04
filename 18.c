// matrix multiplication
#include <stdio.h>
void main()
{
    int i, j, k, r, s, m, n;
    printf("Enter the order of first matrix\n");
    scanf("%d%d", &m, &n);
    printf("Enter the order of second matrix\n");
    scanf("%d%d", &r, &s);
    int a[25][25], b[25][25], c[25][25];
    if (m != r)
        printf("\n The matrix cannot multiplied");
    else
    {
        printf("\n Enter the elements of first matrix ");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
                scanf("\t%d", &a[i][j]);
        }
        printf("\n Enter the elements of second matrix ");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
                scanf("\t%d", &b[i][j]);
        }
        for (i = 0; i < m; i++)
        {
            printf("\n");
            for (j = 0; j < n; j++)
            {
                c[i][j] = 0;
                for (k = 0; k < m; k++)
                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }
    printf("\n Multiplication of two matrix is");
    for (i = 0; i < m; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
            printf("\t%d", c[i][j]);
    }
}