#include<stdio.h>
int main()
{
     int n, i=0 , sum = 0;
     float avg = 0.0;
     printf("enter the number: ");
     scanf("%d",&n);
     do{
        sum=sum+i;
        i=i+1;
        }while(i<=n);
         avg = (float) sum/n;
        printf("\n sum of first %d number = %d",n,sum);
        printf("\n avg of first %d number = %.2f",n,avg);
}
