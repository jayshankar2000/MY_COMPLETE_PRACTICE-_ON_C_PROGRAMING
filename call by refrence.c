#include<stdio.h>
 void add(int n);
int main()
{
    int num = 2;
    printf("\n the value of num before calling the function = %d", num);
    add num;
    printf("\n the value of num after calling the function = %d", num);
    return 0;

}
   void add(int n)
 {
    n=n+10;
    printf("\n the value of num  in called the function = %d",n);

 }
