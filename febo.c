#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b,c;
   int n;
   int count;
   printf("\n Enter term for febonaci series ");
    scanf("%d",&n);
   a=0; b=1;
   printf("\n%d",a);
   printf("\n%d",b);
   count=2;
   while(count<n)
   {
      c=a+b;
      count=count+1;
      printf("\n%d",c);
      a=b;
      b=c;

    }

}

