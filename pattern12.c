#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter the number:");
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=k;j++)
        {
         if(((i>=4&& i<=6)&& (j>=4)||(i>=10&&i<=12)&&(j<=6)))
            printf(" ");
                else
                printf("*");

        }
        printf("\n");



    }
}
