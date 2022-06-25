#include<stdio.h>
int main( )
{
    int x=0,y=0;
    if(++x && y++)
        printf("x=%d y=%d",x,y);
    else
        printf("y=%d x=%d",y,x);
    getch();
}
