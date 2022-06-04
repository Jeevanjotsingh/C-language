//Program to store information of a student using union
#include <stdio.h>
union student
{
    char name[50];
    int id;
    int year;
}; 

void main( )
{
    union student stu;
    printf("\nEnter the name of the student: ");
    scanf("%s", &stu.name);
    printf("The name of the student entered is %s\n", stu.name);
    printf("Enter the id of student: ");
    scanf("%ld", &stu.id);
    printf("The id of the student entered is %d\n", stu.id);
    printf("Enter the date of birth: ");
    scanf("%d", &stu.year);
    printf("The D.O.B of student entered is %d\n", stu.year); 
}