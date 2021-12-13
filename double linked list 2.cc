#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *prev;
    struct node *next;
};
typedef struct node node;

void insertf(node **head)
{
    int a;
    node *temp;
    temp=(node*)malloc(sizeof(node));
    printf("ENTER THE NUMBER TO BE INSERTED AT FIRST:\n");
    scanf("%d",&a);
    temp->info=a;
    temp->next=NULL;
    temp->prev=NULL;
    if(*head==NULL)
    {
         *head=temp;
    }
    else
    {
         temp->next=*head;
         temp->prev=NULL;

    }

}

void display(node **head )
{
    node *t;
    t=*head;
    while(t!=NULL)
    {
        printf("%d ",t->info);
        t=t->next;
    }

}
int main()
{
    int n;
    node *head=NULL;
    while(1)
    {
        printf("____________________________________ENTER_________________________________");
        printf("\n1.TO INSERT :\n2.TO DISPLAY :\n");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            insertf(&head);
            break;
        case 2:
            display(&head);
            break;
        default:
            printf("YOU HAVE ENTERED WRONG CHOICE:");
        }

    }
}
