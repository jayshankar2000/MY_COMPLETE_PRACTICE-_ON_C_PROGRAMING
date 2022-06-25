#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start =NULL;
struct node *create_11(struct node*);
struct node *display_11(struct node*);
struct node *insert_beg(struct node*);
struct node *insert_end(struct node*);
int main()
{
    int choice;
    printf("Enter choice\n 1.create_11\n 2.display_11\n 3.insert_beg\n 4.insert_end\n 5.exit\n");
    while(1)
    {
        printf("\nEnter the choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            start = create_11(start);
            break;
            case 2:
             start =display_11(start);
             break;
             case 3:
              start =insert_beg(start);
              break;
              case 4:
              start =insert_end(start);
              break;
              case 5:
              exit(1);
              break;
              default:
              printf("Invalid choice\n");
              break;

        }
    }
}
struct node *create_11(struct node *start)
{
    int num;
    struct node *new_node;
    printf("Enter number\n");
    scanf("%d",&num);
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=num;
    if(start == NULL)
    {
        start = new_node;
        new_node->next = NULL;
    }
    else
    {
        start = new_node;
        new_node->next = NULL;

    }
   return start;
}
struct node *display_11(struct node *start)
{
    struct node *ptr;
    if(start == NULL)
    {
     printf("linklist emptey\n");
    }
    else
    {
       ptr = start;
        printf("Linklist data is\t");
       while(ptr != NULL)
       {
       printf("%d  ",ptr->data);
       ptr = ptr->next;
       }
    }
    return start;
}
struct node *insert_beg(struct node *start)
{
    struct node *new_node;
    int val;
    printf("Enter value want to insert at begning\n");
    scanf("%d",&val);
   new_node=(struct node*)malloc(sizeof(struct node));
   new_node->data=val;
   new_node->next=start;
   start = new_node;
   return start;
}
struct node *insert_end(struct node *start)
{
    struct node *new_node;
    int val;
    struct node *ptr;
    printf("Enter value want to insert at end\n");
    scanf("%d",&val);
     new_node=(struct node*)malloc(sizeof(struct node));
     new_node->data=val;
     new_node->next=NULL;
    ptr = start;
    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next=new_node;
    return start;
}
