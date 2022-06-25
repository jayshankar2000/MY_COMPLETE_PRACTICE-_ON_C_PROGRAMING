#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start =NULL;
struct node *create_cll(struct node*);
struct node *display_cll(struct node*);
struct node *insert_beg(struct node*);
struct node *insert_end(struct node*);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);
int main()
{
    int choice;
    printf("Enter choice\n 1.create_cll\n 2.display_cll\n 3.insert_beg\n 4.insert_end\n  5.delete_beg\n 6. delete_end\n 7.exit\n");
    while(1)
    {
        printf("\nEnter the choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            start = create_cll(start);
            break;
            case 2:
             start =display_cll(start);
             break;
             case 3:
              start =insert_beg(start);
              break;
              case 4:
              start =insert_end(start);
              break;
              case 5:
             start= delete_beg(start);
             break;
              case 6:
              start=delete_end(start);
              break;
              case 7:
              exit(1);
              break;
              default:
              printf("Invalid choice\n");
              break;

        }
    }
}
struct node *create_cll(struct node *start)
{
    struct node *new_node,*ptr;
    int num;
    printf("\n Enter -1 for end");
    printf("\n Enter the data : ");
    scanf("%d",&num);
    while(num!=-1)
    {
         new_node = (struct node*)malloc(sizeof(struct node));
         new_node->data = num;
         if(start == NULL)
         {
             new_node->next=new_node;
             start = new_node;
         }
         else
         {
           ptr = start;
           while(ptr->next != start)
            ptr = ptr->next;
            ptr-> next = new_node;
            new_node->next=start;
         }
         printf("\n Enter the data : ");
         scanf("%d",&num);

    }
    return start;
}
struct node *display_cll(struct node *start)
{
    struct node *ptr;
    ptr=start;
    while(ptr->next != start)
    {
        printf("\n%d",ptr->data);
        ptr = ptr->next;
    }
    printf("\n %d",ptr->data);
    return start;
}
struct node *insert_beg(struct node *start)
{
    struct node *new_node,ptr;
    int num;
    printf("\n Enter the data : ");
    scanf("\n%d",&num);
    new_node=(struct node *)malloc(sizeof(struct node));
    new_node->data = num;
    new_node->next=start;
    ptr = start;
    while(ptr->next != start)
        ptr = ptr->next;
    ptr->next = new_node;
    start = new_node;
    return start;
}
struct node *insert_end(struct node *start)
{
struct node *ptr, *new_node;
int num;
printf("\n Enter the data : ");
scanf("\n%d", &num);
new_node = (struct node *)malloc(sizeof(struct node));
new_node->data = num;
ptr = start;
while(ptr->next!=start)
 ptr=ptr->next;
ptr->next = new_node;
new_node->next = start;
return start;
}
struct node *delete_beg(struct node *start)
{
struct node *ptr;
ptr = start;
while(ptr->next != start)
 ptr=ptr->next;
ptr->next = start->next;
free(start);
start=ptr->next;
return start;
}
struct node *delete_end(struct node *start)
{
struct node *ptr, *preptr;
ptr = start;
while(ptr->next!=start)
{
 preptr = ptr;
 ptr = ptr->next;
}
preptr->next = ptr->next;
free(ptr);
return start;
}
