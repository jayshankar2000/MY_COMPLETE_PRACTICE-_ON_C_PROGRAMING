#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    float avg;
    printf("Enter the number: ");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
        sum+=a[i];
        avg=sum/10.0;
        printf("average is %f",avg);


}
