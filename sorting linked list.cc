#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
};
typedef struct node node;
void insertf(node **head)
{
    int n;
    node * temp;
    printf("ENTER THE NUMBER TO BE INSERTED:");
    scanf("%d",&n);
    temp=(node*)malloc(sizeof(node));
    temp->info=n;
    temp->next=NULL;
        if(*head==NULL)
            {
                *head=temp;
            }
        else
            temp->next=*head;
            *head=temp;

}
void popf(node **head)
{
    node *temp=*head;
    *head = (*head) -> next ;
    temp->next=NULL;
    printf("THE POPPED ELEMENT IS: %d",temp->info);
    free(temp);
}

void insertl(node**head)
{
    int a;
    node *temp;
    printf("ENTER THE ELEMENT TO BE INSERTED FROM LAST:\n");
    scanf("%d",&a);
    temp=(node*)malloc(sizeof(node));
    temp->info=a;
    temp->next=NULL;
    if(*head==NULL)
    {
        *head=temp;
    }
    node *t=*head;
        while(t->next!=NULL)
        {
            t=t->next;

        }
        t->next=temp;
}

void deletel(node **head)
{
    node *temp;
    temp->next=(*head);
    while(temp->next->next!=NULL)
    {
        temp=temp->next;

    }
     printf("\n THE DELETED ELEMENT IS %d:",temp->next->info);
     temp->next=NULL;

}

void countnode(node **head)
{
    int count=0;
    node*c=*head;
    while(c!=NULL)
    {
        c=c->next;
        count++;
    }
    printf("THE TOTAL NUMBER OF NODE IN THE LIST IS :%d",count);

}

void sorting(node **head)
{
    node *i , *j;
    int a;
    for(i=*head;i!=NULL;i=i->next)
    {
        for(j=i->next;j!=NULL;j=j->next)
        {
            if(i->info > j->info)
            {
                a=i->info;
                i->info = j->info;
                j->info=a;
            }

        }
    }

}


 void display(node **head)
 {
     node *temp;
     temp=*head;
    while(temp!=NULL)
    {
        printf("%d ",temp->info);
        temp=temp->next;
    }
 }
int main()
{
     node *head = NULL;
    int n;
    while(1)
    {
        printf( "--------------------ENTER-----------------------\n 1.TO INSERT AT FIRST:\n 2.TO POP \n  3.TO INSERT FROM LAST:\n"
                "4.  TO DISPLAY \n 5.TO DELETE FROM LAST \n 6.TO COUNT NODE\n 7.TO SORT LINKED LIST\n 8. TO EXIT:\n ");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
                insertf(&head);
                break;
            case 2:
                popf(&head);
                break;
            case 3:
                insertl(&head);
                break;
            case 4:
                display(&head);
                break;
            case 5:
                deletel(&head);
                break;
            case 6:
                countnode(&head);
                break;
            case 7:
                sorting(&head);
                break;
            case 8:
                printf("PROGRAM TERMINATED BY CHOICE:");
                exit(0);
            default:
                printf("YOU HAVE ENTERED WRONG CHOICE:");
        }
    }
    return 0;
}
