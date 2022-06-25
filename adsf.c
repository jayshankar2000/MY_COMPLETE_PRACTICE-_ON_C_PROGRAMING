#include<stdio.h>
int main()
{
    int a=3,b=4;
    a>b?(a=b):(b=a);
    printf("%d %d",a,b);
    getch();
}
