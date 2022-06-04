// Program to store the information of student marks using structures and find total marks of individual
#include <stdio.h>
struct marks
{
    int total;
    int roll;
    int english;
    int maths;
    int chemistry;
};
void main()
{
    int n, i;
    printf("Enter the total no. of students: ");
    scanf("%d", &n);
    struct marks st[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter roll no. and marks of english, maths, chemistry: ");
        scanf("%d%d%d%d", &st[i].roll, &st[i].english, &st[i].maths, &st[i].chemistry);
    }
    for (i = 0; i < n; i++)
    {
        st[i].total = st[i].english + st[i].maths + st[i].chemistry;
        printf("Total marks of roll no %d is %d\n", st[i].roll, st[i].total);
    }
}