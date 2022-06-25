#include<stdio.h>
#include<conio.h>
void main()
{
     int m[5];
     int i;
     int sum=0; float avg;
     printf("\n Enter the marks of math for 5 student:");
     for(i=0;i<5;i++)
     scanf("%d",&m[i]);
     for(i=0;i<30;i++)
     sum=sum+m[i];
     avg=sum/5.0;
     printf("average is %f",avg);
       getch();

}
