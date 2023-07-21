#include<stdio.h>

struct node{
    int data;
    struct node *next;
}*head,*temp,*newnode;

void display()
    {
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    }

 int insertion_in_begining()
 {
     newnode=(struct node*)malloc(sizeof(struct node));
        printf("\nenter the data : ");
        scanf("%d",&newnode->data);
        newnode->next=head;
        head=newnode;
         display();
 }
 int insertion_at_last()
 {
     newnode=(struct node*)malloc(sizeof(struct node));
        printf("\nenter the data : ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        temp=head;
        while(temp->next!=NULL)
        {
           temp=temp->next;
        }
        temp->next=newnode;
                temp=newnode;

        display();
 }

int main()
{
    int n;
    printf("enter the no of elements : ");
    scanf("%d",&n);
    while(n!=0)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the data : ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        n--;

    }
    display();
    insertion_in_begining();
    insertion_at_last();
}
