#include<stdio.h>
#include<stdlib.h>
struct node

{
       int data;
       struct node *next;
};
   struct node *start = NULL;
   struct node *create_cll(struct node *);
   struct node *display(struct node *);
   struct node *insert_beg(struct node *);
   struct node *insert_end(struct node *);
   int main()
   {
      int choice;
      printf("Enter choice\n 1.create_cll\n 2.display\n 3.insert_beg\n 4.insert_last\n 5.exit\n");
      while(1)
      {
      printf("Enter the choice\n");
      scanf("%d",&choice);
      switch(choice)
      {
        case 1: start = create_cll(start);
                break;
        case 2: start = display(start);
                break;
        case 3: start = insert_beg(start);
                break;
        case 4: start = insert_end(start);
                break;
        case 5: exit(1);
        default :printf("Invalid choice");
                 break;
      }
    }
}
struct node *create_cll(struct node *start)
{
   struct node *new_node, *ptr;
int num;
printf("\n Enter –1 to end");
printf("\n Enter the data : ");
scanf("%d", &num);
while(num!=–1)
{
 new_node = (struct node*)malloc(sizeof(struct node));
 new_node -> data = num;
 if(start == NULL)
 {
 new_node -> next = new_node;
 start = new_node;
 }
 else
 { ptr = start;
 while(ptr -> next != start)
 ptr = ptr -> next;
 ptr -> next = new_node;
 new_node -> next = start;
 }
 printf("\n Enter the data : ");
 scanf("%d", &num);
}
return start;
}






