// Program to implement an array of structures for student marks for each student and pass it to function for
#include <stdio.h>
int n;
struct students
{
    char name[20];
    int roll;
    int marks[4];
};
void ope(struct students[]);
void main()
{
    int j, i;
    printf("Enter the no.of students: ");
    scanf("%d", &n);
    struct students st[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the name of the student: ");
        scanf("%s", &st[i].name);
        printf("Enter the roll no.: ");
        scanf("%d", &st[i].roll);
        printf("Enter the marks of english,physics,maths,chemistry:\n");
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &st[i].marks[j]);
        }
    }
    ope(st);
}
void ope(struct students st[])
{
    for (int i = 0; i < n; i++)
    {
        int sum = 0, p;
        printf("\nDEATILS OF STUDENT %d", i + 1);
        printf("\nName\troll\tEnglish\tPhysics\tMaths\tChemistry\ttotal marks\tPercentage");
        printf("\n%s", st[i].name);
        printf("\t%d", st[i].roll);
        for (int j = 0; j < 4; j++)
        {
            printf("\t%d", st[i].marks[j]);
            sum += st[i].marks[j];
        }
        printf("\t\t%d", sum);
        p = sum / 4;
        printf("\t\t%%%d", p);
    }
}