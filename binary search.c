#include<stdio.h>
int main()
{
    int arr[5];
    int low,up,mid,i,item;
    printf("Enter the element of array in sorted order: \t");
    for(i=0;i<10;i++)
        scanf("%d",&arr[i]);
    printf("Enter the item to be searched: ");
    scanf("%d",&item);
    low=0;
    up=10-1;
    while(low<=up && item !=arr[mid])
    {
        mid=(low+up)/2;
        if(item>arr[mid])
            low =mid+1;
        if(item<arr[mid])
            up=mid-1;
        if(item==arr[mid])
            printf("%d is found at %d ",item,mid+1);
        if(low>up)
            printf("%d not found in the array",item);
    }
}
