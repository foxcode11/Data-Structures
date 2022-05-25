#include<stdio.h>
#include<stdlib.h>
#define size 10
struct queue{
int array[size];
int front, rear;
};
void create_queue(struct queue*CQ)
{
    CQ->front=-1;
    CQ->rear=-1;
}
void EnCqueue(struct queue*CQ,int item)
{
    if(CQ->front==-1||CQ->rear==-1)
    {
        CQ->front=0;
        CQ->rear=0;
    }
    else if(CQ->rear==(size-1))
    {
        if(CQ->front==0)
        {
            printf("Queue Overflows");
        }
        CQ->rear=0;
    }
    else if(CQ->rear==(CQ->front-1))
        printf("Queue Overflow");
    else
        CQ->rear=CQ->rear+1;
    CQ->array[CQ->rear]=item;
}
int DeCqueue(struct queue*CQ)
{
    if(CQ->front==-1||CQ->rear==-1)
    {
        printf("Queue is Underflow");
        return;
    }
    int item=CQ->array[CQ->front];
    if(CQ->rear==CQ->front)
    {
        CQ->front=-1;
        CQ->rear=-1;
    }
    else if(CQ->front==(size-1))
    {
        CQ->front=0;
    }
    else
        CQ->front=CQ->front+1;
    return item;
}
void display(struct queue*Q)
{
    int i=Q->front;
    while(i<=Q->rear)
    {
        printf("%d ",Q->array[i]);
        i++;
    }
}
void display_front(struct queue*f)
{
    printf("%d",f->array[f->front]);
}
int main()
{
    int n,x;
    struct queue*Q=malloc(sizeof(struct queue*));
    create_queue(Q);
    printf("1.Insert\n2.Delete\n3.Display element at the front\n4.Display all elements of the queue\n5.Quit");
    printf("\nEnter your Choice: ");
    scanf("%d",&n);
    do
    {
        switch(n)
        {
            case 1: printf("\nInput the element for adding in queue :");
                    scanf("%d",&x);
                    EnCqueue(Q,x);
                    break;
            case 2: printf("\nDeleted element is: ");
                    printf("%d\n",DeCqueue(Q));
                    break;
            case 3: printf("\nElement at the front is: ");
                    display_front(Q);
                    printf("\n");
                    break;
            case 4: printf("\nQueue is: ");
                    display(Q);
                    printf("\n");
                    break;
            default: printf("\nInvalid Entry");
        }
        printf("1.Insert\n2.Delete\n3.Display element at the front\n4.Display all elements of the queue\n5.Quit");
        printf("\nEnter your Choice: ");
        scanf("%d",&n);
    }while(n!=5);
    return 0;
}

