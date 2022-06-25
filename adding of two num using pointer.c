#include<stdio.h>
void sum(int*,int*,int*);
int main()
{
     int num1,num2,total;
     printf("\n enter the first number: ");
     scanf("%d",&num1);
     printf("\n enter the second number: ");
     scanf("%d",&num2);
     sum(&num1,&num2,&total);
     printf("\n total = %d",total);
     return 0;
}
void sum(int *a,int *b,int *t)
{
  *t = *a + *b;

}
