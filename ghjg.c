#include<stdio.h>
#include<stdlib.h>
#define size 100
int main()
{
    int a[100],n,i,sum=0;
    float avg;
    printf("\nEnter the number: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
        sum=sum+a[i];
    avg=(float)sum/n;
    {
        printf("sum=%d && avg=%f",sum,avg);
    }
    return 0;
}
