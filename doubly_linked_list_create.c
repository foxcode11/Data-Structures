#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node*prev;
    struct node*next;
};
void display(struct node*temp1)
{
    if(temp1==NULL)
    {
        printf("%s","List is Empty");
    }
    else
    {
        while(temp1!=NULL)
        {
            printf("%d  ",temp1->info);
            temp1=temp1->next;
        }
    }
}
int main()
{
    int n;
    printf("Enter the Number of nodes: ");
    scanf("%d",&n);
    struct node*start,*end,*temp;
    struct node*current=malloc(sizeof(struct node*));
    int data;
    printf("Enter the data to insert into Node: ");
    scanf("%d",&data);
    current->info=data;
    current->prev=NULL;
    current->next=NULL;
    start=current;
    end=current;
    n=n-1;
    while(n!=0)
    {
        printf("Enter the data to insert into Node: ");
        scanf("%d",&data);
        struct node*newnode=malloc(sizeof(struct node*));
        newnode->info=data;
        newnode->prev=end;
        newnode->next=NULL;
        end->next=newnode;
        end=newnode;
        n=n-1;
    }
    printf("The Data in Nodes are: ");
    display(start);
    return 0;
}
