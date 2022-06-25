#include<stdio.h>
#include<stdlib.h>
typedef struct BST
{
    struct BST *lchild;
    int data ;
    struct BST *rchild;
}node;
node *root=NULL;
struct stack
{
    node *d;
    struct stack *next;
};


void insert(node *r,node *new_node)
{
    if(new_node->data <r->data)
    {
        if (r->lchild==NULL)
        {
            r->lchild=new_node;
        }
        else
        {
            insert(r->lchild,new_node);
        }
    }

}
void inorder(node * temp)
{
    if(temp!=NULL)
    {
        inorder(temp->lchild);
        printf("%d",temp->data);
        inorder(temp->rchild);
    }
}
void preorder(node *temp)
{
    if(temp!=NULL)
    {
        printf("%d",temp->data);
        preorder(temp->lchild);
        preorder(temp->rchild);

    }
}

void postorder(node *temp)
{
    if(temp!=NULL)
    {
        postorder(temp->lchild);
        postorder(temp->rchild);
        printf("%d",temp->data);
    }
}
void push(node *n)
{
    struct stack *t;
    t=(struct stack *)malloc(sizeof(struct stack));
    if(t==NULL)
    {
        printf("memory not allocated");
        exit(1);
    }
    t->d=n;
    if(TOP==NULL)
    {
        TOP=t;
        t->next=null;
    }
    else
    {
        t->next=TOP;
        TOP=t;
    }
}
node *peep()
{
    if(TOP==NULL)
}
{
    return NULL;
}
else
{
    return(TOP->d);
}
node *pop()
{
    struct stack *ptr=TOP;
    node *t=TOP=d;
    if (TOP==NULL)
    {
        return NULL;
    }
    else
    {
      TOP=TOP->next;
      free(ptr);
      return(t);
    }
}

void preorderNR(node *root)
{
    while(1)
    {
        while(root!=NULL)
        {
            printf("%d",root->data);
            push(root);
            root=root->lchild;
        }
        if(TOP==NULL)
        {
            break;
        }
        root=pop();
        root=root->rchild;
    }
}
void inorderNR(node *r)
{
    while(1)
    {
        while(r)
        {
            push(r);
            r=r->lchild;
        }
        if(TOP==NULL)
        {
            break;
        }
        else
        {
            r=pop();
            printf("%d",r->data);
            r=r->rchild
        }
    }
}
void postorderNR(node *)
{
    do
    {
        while(r)
        {
            if(r->rchild)
            {
                push(r->rchild);
            }
            push(r);
            r=r->lchild;
        }
        r=pop();
        if(r->rchild && (peep()==r->rchild))
        {
            pop();
            push(r);
            r=r->rchild;
        }
        else
        {
            printf("%d",r->data);
            r=NULL;
        }

    }while(TOP!=NULL);
}
int main()
{
    int option;
    node *new_node;
    printf("enter your choice: ");
    scanf("%d",&option);
    switch(option)
    {
    case 1:
        new_node=(node*)malloc(sizeof(node));
        new_node->lchild=null;
        new_node->rchild=null;
        printf("Enter element");
        scanf("%d",&new_node->data);
        if (root=null)
        {
            root=new_node;
        }
        else{
            insert(root,new_node);
            break;
    case 2:
        if(root==null)
        {
            printf("the tree is not created");

        }
        else
        {
            printf("resersive inorder display");
            inorder(root);
            preorder(root);
            postorder(root);
            inorderNR(root);
            preorderNR(root);
            postorder(root);
        }
         break;
         default:
         printf("invalid option");
    }
}
