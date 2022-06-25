#include<stdio.h>
int add(int, int);
int main()
{
    int m=10,n=15,sum;
    sum=add(m, n);
    printf("\n sum is %d",sum);

}
int add( int a ,int b)
{
  return(a+b);

}
