#include<stdio.h>
#include<conio.h>
void main()
{
   int n,i;
   printf("\n Enter the number: ");
   scanf("%d",&n);
   i=2;
   while(i<=n-1)
   {
     if(n%i==0)

       printf("\n given number is not prime");


       i = i+1;
       if(i==n)
       printf("given number is prime");
       getch();

   }
}
