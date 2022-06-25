#include<stdio.h>
int main()
{
    int n,i,mult;
    printf("\nEnter the number: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
    mult=i*n;
    printf("%d*%d=%d\n",n,i,mult);
    }
}
