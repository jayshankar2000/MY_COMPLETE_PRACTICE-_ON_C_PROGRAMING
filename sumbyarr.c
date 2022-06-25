#include<stdio.h>
void main()
{
    int a[30];
    int i,n,sum=0;
    printf("Enter the number of N: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sum=0;
    for(i=0;i<n;i++)
    {
        sum=(sum+a[i]);
    }
    printf("sum of given number is = %d",sum);
}
