#include<stdio.h>
#include<conio.h>
int main()
{
    float radius;
    double area;
    printf("enter the the radius of circle: ");
    scanf("%f",&radius);
    area = 3.14*radius*radius;
    printf("\n area = %.2f",area);
    return 0;
}
