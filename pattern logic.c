#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the no of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
