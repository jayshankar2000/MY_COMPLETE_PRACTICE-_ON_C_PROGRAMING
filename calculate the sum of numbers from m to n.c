#include<stdio.h>
int main()
{
   int m,n,i,sum=0;
   printf("\n enter the number m: ");
   scanf("%d",&m);
   i=m;
   printf("\n enter the number n: ");
   scanf("%d",&n);
   while(i<=n)
   {
        sum = sum+i;
        i=i+1;

   }  printf("\n sum of %d to %d = %d",m,n,sum);

}
