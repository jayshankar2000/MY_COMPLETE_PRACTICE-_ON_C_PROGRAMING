#include<stdio.h>
int main()
{
    int a[30];
    int n, i,j,tem;
    printf("Enter the number that you want to sort: ");
    scanf("%d",&n);
    printf("Enter %d element: ",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=0;i<=n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]>a[j+1])

        {
            tem=a[j];
            a[j]=a[j+1];
            a[j+1]=tem;
        }

        }

    }
       printf("Order of Sorted elements: ");
        for(i=0;i<n;i++)
        printf(" %d",a[i]);


}
