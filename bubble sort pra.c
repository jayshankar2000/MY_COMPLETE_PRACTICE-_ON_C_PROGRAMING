#include<stdio.h>
#include<stdlib.h>
void main()
{
    struct node{
      int data;
      struct node*next;

    };
    struct node *head,*newnode,*temp;
    head=NULL;int choice;
    int count;
    while(choice)
    {
       newnode=(struct node*)malloc(sizeof(struct node));
       printf("Enter the data: ");
       scanf("%d",&newnode->data);
       newnode->next=NULL;
       if(head==NULL)
       {
           head=temp=newnode;
       }
       else
       {
           temp->next=newnode;
           temp=newnode;
       }
       pri
    }
}

