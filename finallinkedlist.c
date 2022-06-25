#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node* link;
};
struct node* root = null;
int main()
{
    int ch;
   while(1)
   {
         printf("1.append\n");
         printf("2.add at begin\n");
         printf("3.add at after\n");
         printf("4.length\n");
         printf("5.display\n");
         printf("6.delete\n");
         printf("7.quit\n");

         printf("Enter your choice: ");
         scanf("%d",&ch);

         swich(ch)
         {
            case 1:   append();
                      break;
            case 2:   addatbegin();
                      break;
            case 3:   addatafter();
                      break;
            case 4:    length();
                     break;
             case 5:  display();
                      break;
             case 6:  delete();
                      break;
             case 7:  exit(1);
                     break;
             default: printf("Invalid input\n");
           }
   }
}

void append()
{
   struct node* temp;
  temp = (struct node*) malloc(sizeof(struct node));
  printf("Enter node data : ");
  scanf("%d", &temp->data);
  temp->link=null;
  if(root == null)
  {
      root = temp ;

  }
  else
  {

  }
}
