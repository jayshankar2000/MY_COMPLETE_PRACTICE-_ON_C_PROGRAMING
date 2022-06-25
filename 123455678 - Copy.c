#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node *next;
 };
int main()
 {
    start=create_11(start);
 }

  struct node *start=null;
 struct node *create_ll(struct node *);

 struct node *create_ll(struct node *start)
 {
    struct node *new_node;
    int num;
    printf("enter the value")
    scanf("%d",&num);
    printf("enter -1 to exit");
    while(num!=null)
    {
      new_node=(struct node *)malloc(sizeof(struct node));
      new_node->data=num;
      if(start==null)
      {
          new_node->next=null;
          start=new_node;
      }
      else
      {
        new_node->next=start;
        start=new_node;
      }
       printf("enter the value");
       scanf("%d",&num);
       printf("enter -1 to exit");
    }
    return=start;
 }

