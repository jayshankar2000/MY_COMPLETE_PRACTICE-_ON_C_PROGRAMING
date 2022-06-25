#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start =NULL;
struct node create_11(struct node);
int main()
{
    start=create_11(start);
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
    printf("Enter num is %d\n",num);
   return start;
}
