#include<stdio.h>
void main()
{
    int n,i,sum;
    printf("Enter the number of N: ");
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i=i+2)
    {
        sum = sum + i;
    }
    printf("SUM = %d\n",sum);

}

