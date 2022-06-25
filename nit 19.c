#include<stdio.h>
void main()
{
    int a=4,b=5;
    b=a++ + a--;
    a=++b + b--;
    {
        printf("%d %d\n",a,b);
    }
}
