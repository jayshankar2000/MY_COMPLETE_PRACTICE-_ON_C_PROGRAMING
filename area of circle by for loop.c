#include<stdio.h>
#include<conio.h>
void main()
{
     float r,area;
     int i;
     for(i=1;i<=10;i++)
     {
         printf("\n Enter the value of radius: ");
         scanf("%f",&r);
          area=3.14*r*r;
          printf("area is %f",area);
          getch();
     }

}
