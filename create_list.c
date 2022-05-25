#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node*next;
};
struct node * create_list()
{
    struct node* start;
    start=NULL;
    return start;
};
void display(struct node*temp)
{
    while(temp!=NULL)
    {
        printf("%d ",temp->info);
        temp=temp->next;
    }
}
int main()
{
    struct node* start,*tem;
    start=create_list();
    if(start==NULL)
    {
        printf("%s\n","Empty list");
    }
    int x;
    printf("%s\n","Enter the data");
    scanf("%d",&x);
    start=malloc(sizeof(struct node*));
    start->info=x;
    start->next=NULL;
    tem=start;
    int m;
    do
    {
        printf("%s\n","Do you want to add list? type '1' for yes and '-1' for no ");
        int  ch;
        scanf("%d",&ch);
        m=ch;
        struct node* temp=malloc(sizeof(struct node));
        if(ch==1)
        {
            int x;
            printf("%s\n","Enter the data");
            scanf("%d",&x);
            temp->info=x;
            temp->next=NULL;
        }
        tem->next=temp;
        tem=temp;


    }while(m!=-1);
    printf("\nThe Element in Node are: ");
    display(start);
    return 0;

}
