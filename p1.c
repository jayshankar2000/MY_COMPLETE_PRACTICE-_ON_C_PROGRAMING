#include<stdio.h>
int main()
{
    char arr[]="madeeasy";
    char *p = arr;
    ++*p;
    printf("%c",*p);
    getch();
    return 0;
}
