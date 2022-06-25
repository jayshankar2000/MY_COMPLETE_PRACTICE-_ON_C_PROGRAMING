#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
  int data;
  struct node *next;
}node;
insertfirst()
{

}
int main()
{
  node *head = null
  int ch,val;
  while(1)
  {
    printf("1.insert first"\n);
    printf("2.insert last\n");
    printf("enter your choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
       case 1:
           insertfirst();
           break;
       case 2:
           insertlast();
           break;
    }

  }
}


