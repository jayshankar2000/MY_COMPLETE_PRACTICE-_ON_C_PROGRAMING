#include<stdio.h>
char fun();
int main()
{
    char c = fun();
    printf("\n character is: %c", c);

}

char fun()
{
  return 'a';


}
