#include<stdio.h>
void main()
{
    int i,j,n,r;
    printf("Enter the number N: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
     {
        for(j=1;j<=10;j++)
        {
             r=i*j;
           printf("%d*%d=%d\t ",i,j,r);
           printf("\b");
        }
        printf("\n");
     }
     printf("\n");
}
