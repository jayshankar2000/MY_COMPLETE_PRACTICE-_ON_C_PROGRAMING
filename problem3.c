#include<stdio.h>
void main()
{
    int n,i;
    float sum;
    printf("Enter the number of N: ");
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i=i+1)
    {
        sum = sum+(float)1/i;
    }
    printf("SUM = %d\n",sum);

}


