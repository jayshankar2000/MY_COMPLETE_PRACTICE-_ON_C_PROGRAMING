#include<stdio.h>
int main()
{
    int a[20],n,i,j,tem;
    printf("enter the size of array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the element: ");
        scanf("%d",&a[i]);
    
    for(i=0;i<n-1;i++)
    {
     for(j=0;j<n-i-1;j++)
    {
    if(a[j]>a[j+1])
    {
        tem=a[j];
        a[j]=a[j+1];
        a[j+1]=tem;
    }
}
}
    for(j=0;j<n;j++)
    {
        printf("%d\t",a[j]);
    }
    return 0;

}

