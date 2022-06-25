#include<stdio.h>
void fun(int,int);
 main()
 {
     int a=10,b=20;
     printf("%d %d",a,b);
     getch();
 }
 void fun(int a,int b)
 {
     int c;
     c=a;
     a=b;
     b=c;
     printf("%d %d",a,b);
 }
