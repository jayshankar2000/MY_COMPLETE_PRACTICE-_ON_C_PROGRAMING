#include<stdio.h>
int main()
{
    int a[20],n,i,j,tem,p,k;
    printf("enter the size of array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the element: ");
        scanf("%d",&a[i]);
    }
    for(k=0;k<n-1;k++)
    {
     for(p=0;p<n-1;p++)
    {
    if(a[p]>a[p+1])
    {
        tem=a[p];
        a[p]=a[p+1];
        a[p+1]=tem;
    }
}
}
    for(j=0;j<n;j++)
    {
        printf("%d\t",a[j]);
    }
    return 0;

}
