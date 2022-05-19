#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node*next;
};
struct node* insert_beginning(struct node* start,int x)
{
  struct node* temp=malloc(sizeof(struct node));
  temp->info=x;
  temp->next=start;
  start=temp;
  return start;
}
void insert_atlast(struct node* start,int data)
{
  struct node*temp;
  struct node*new_node=malloc(sizeof(struct node));
  new_node->info=data;
  new_node->next=NULL;
  if(start==NULL)
  {
      start=new_node;
  }
  else
  {
   temp=start;
    while(temp->next!=NULL)
    {
     temp=temp->next;
    }
    temp->next=new_node;
  }
}
struct node* insertat_given_loc(struct node*start,int data,int loc)
{
    struct node*temp=start;
    struct node*new_node=malloc(sizeof(struct node));
    new_node->info=data;
    if(loc==1)
    {
        new_node->next=start;
        start=new_node;
    }
    else if(loc>=2&&temp!=NULL)
    {
        for(int i=1;i<=loc-2;i++)
        {
            temp=temp->next;
            if(temp==NULL)
            {
                printf("%s\n","location is greater then number of node+1");
                return;
            }
        }
        new_node->next=temp->next;
        temp->next=new_node;
    }
    else
        printf("%s\n","invalid location");
    return start;
}
void display(struct node*temp)
{
    if(temp==NULL)
    {
        printf("%s","List is Empty");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d  ",temp->info);
            temp=temp->next;
        }
    }
}
int main()
{
    struct node *start= malloc(sizeof(struct node));
    start->info=6;
    start->next=NULL;

    struct node *ptr= malloc(sizeof(struct node));
    ptr->info=7;
    ptr->next=NULL;

    start->next=ptr;
    struct node *third= malloc(sizeof(struct node));
    third->info=5;
    third->next=NULL;
    
    ptr->next=third;
    int n;
    printf("%s\n","SELECT THE NUMBER FOR FOLLOWING OPERATION");
    printf("%s","1-> for insert at beginning\n2->for insert at given location\n3->for insert at last\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:;
                int y=0;
                printf("enter the data: ");
                scanf("%d",&y);
                start=insert_beginning(start,y);
                break;

        case 2:; int m,loc;
                printf("enter the data: ");
                scanf("%d",&m);
                printf("enter the location: ");
                scanf("%d",&loc);
                start=insertat_given_loc(start,m,loc);
                break;

        case 3:; int z;
                printf("enter the data: ");
                scanf("%d",&z);
                insert_atlast(start,z);
                break;
        default: printf("%s","invalid location");
    }
    printf("After adding the element \nElement in list is: ");
    display(start);
    return 0;
}
