#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;
void create_node(int);
void insert_before();
void insert_end();
void delete_end();
void delete_before();
void display();
void main()
{
    int choice,temp ;
    while (1)
    {
    printf(" 1 for Insert_beg \n 2 for insert_end \n 3 for delete_beg \n 4 for delete_end \n 5 for display \n 6 for exit\n");
    printf("Enter your number :");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
        break ;
        case 2:
        break ;
        case 3:
        break ;
        case 4:
        break ;
        case 5:
        break ;
        case 6:
        break ;
        default :
        printf("Invalid choice");

    }
}
}
 struct node create_node(int)
{
struct node *new_node,*temp;

    node temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->next = NULL;
    return temp;
}
void insert()
{
int item;
struct node *new_node;
printf("Insert the item");
scanf("%d",&item);
struct node* ptr = (struct node*) malloc(sizeof(struct node ));
new_node->data = item;
new_node ->next = head;
head = new_node;
}
