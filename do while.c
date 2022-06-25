#include<stdio.h>
#include<conio.h>
void main()
{
    float r,area;
    int i=1;
    do
    {
      printf("\n Enter the value of r: ");
      scanf("%f",&r);
      area=3.14*r*r;
      printf("\n area is %f",area);
      i=i+1;
      }while(i<=10);
      getch();

}
