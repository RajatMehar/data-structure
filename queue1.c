#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int front=-1;
int rear=-1;
int arr[10];

void enqueue()
{
    int a =0;
    if(rear==MAX)
    
        printf("THE QUEUE IS FULL\n:");
       
    else
        printf("ENTER THE NUMBER IN QUEUE\n:");
        scanf("%d" ,&a);
        
        rear++;
        arr[rear]=a;
        
}


void dequeue()
{
    if(front==rear)
        {
            printf("THE QUEUE IS EMPTY:\n");
        
        }
    else
        {
            if(front==-1)
            {
                front++;
            }
           printf("THE DEQUEUED NUMBER IS %d \n",arr[front]);
           front++;
        }   
    
}


void display()
{
    if(front==rear)
        {
            printf("THE QUEUE IS EMPTY:\n");
        }
    else
        for(int i=front;i<=rear;i++)
            {
                printf("%d ",arr[i]);
            }
}    
int main()
{
    int choose;
    while(1)
    {
        
        printf("ENTER\n 1 . TO ENQUEUE\n 2 . TO DEQUEUE\n 3 . TO DISPLAY\n 4 . TO EXIT PROGRAM\n ");
        scanf("%d",&choose);
        switch(choose)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("PROGRAM TERMINATED:\n");
                 exit(0);
            default:
                printf("YOU HAVE ENTERED WRONG CHOICE:\n");
               
        }
    }
    return 0;
}
