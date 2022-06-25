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
struct node *insert_before(struct node *);
struct node *insert_after(struct node *);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);
struct node *delete_node(struct node *);
struct node *delete_after(struct node *);
struct node *delete_list(struct node *);
struct node *sort_list(struct node *);
int main()
{
    int choice;
    printf("Enter choice\n 1.create_11\n 2.display_11\n 3.insert_beg\n 4.insert_end\n 5.insert_before\n 6.insert_after\n 7. delete_beg\n 8.delete_end\n 9.delete_node\n 10.delete_after\n 11.sort_list\n 12.exit\n");
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
              start = insert_before(start);
              break;
              case 6:
              start = insert_after(start);
              break;
              case 7:
              start = delete_beg(start);
              break;
              case 8:
              start = delete_end(start);
              break;
              case 9:
              start = delete_node(start);
              break;
              case 10:
              start = delete_after(start);
               break;
               case 11:
              start = sort_list(start);
               break;
              case 12:
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
struct node *insert_before(struct node *start)
{
struct node *new_node, *ptr, *preptr;
int num, val;
printf("\n Enter the data : ");
scanf("%d", &num);
printf("\n Enter the value before which the data has to be inserted : ");
scanf("%d", &val);
new_node = (struct node *)malloc(sizeof(struct node));
new_node -> data = num;
ptr = start;
while(ptr -> data != val)
{
 preptr = ptr;
 ptr = ptr -> next;
}
preptr -> next = new_node;
new_node -> next = ptr;
return start;

}
