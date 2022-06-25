#include<stdio.h>
void  main();
{
    int a[30];
    int i,n, max=0,min;
    printf("Enter the number of N: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    max=0;
    min = a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
        else
            min=a[i];
    }
    printf("maximum=%d\n",max);
    printf("minimum=%d\n",min);
}
