#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,tem;
    printf("\n Enter the value of a: ");
    scanf("\n%d",&a);
    printf("\n Enter the value of b: ");
    scanf("\n%d",&b);
    printf("\n before the swaping a && b is %d",a,b);
    tem=a;
    a=b;
    b=tem;
    printf("\n afeter the swaping is %d",a,b);
    getch();

}
