#include<stdio.h>
#include<stdlib.h>
#define size 100
int main()
{
  int a[10]={4,3,7,-1,2,0,4,2,13},i,sum=0,LB=0,UB=10;
  float avg;
  for(i=LB;i<UB;i++)
    sum=sum+a[i];
  avg=(float)sum/10;
  {
      printf("sum=%d && avg=%f\n",sum,avg);
  }
  return 0;
}
