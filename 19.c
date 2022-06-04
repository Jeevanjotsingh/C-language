// string operation
#include <stdio.h>
#include <string.h>
void main()
{
    char s[100] = "hello world", p[100] = "hi", a[100];
    int len;
    int b;
    len = strlen(s);
    printf("Length of string is %d", len);
    strcpy(a, s);
    printf("\n%s", a);
    b = strcmp(s, p);
    printf("\n%d", b);
    strcat(p, s);
    printf("\n%s", p);
    strupr(s);
    printf("\n%s", s);
    strrev(s);
    printf("\nReverse of string %s", s);
}