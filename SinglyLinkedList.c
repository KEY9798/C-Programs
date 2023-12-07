/*Program to create Linked List and perform all of its operations*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct node
{
    int data;
    struct node *next;
}node;
int createSinglyLL(node **head,int n)
{
    node *newNode=NULL,*current,*iterator;
    int i;
    for(i=1;i<=n;i++)
    {
        newNode=(node *)malloc(sizeof(node));
        printf("Enter data for Node : %d\n",i);
        scanf("%d",&newNode->data);
        newNode->next=NULL;
        if(*head==NULL)
        {
            *head=newNode;
        }
        else
        {
            current=*head;
            while(current->next!=NULL)
            {
                current=current->next;
            }
            current->next=newNode;
        }
    }
    n=0;iterator=*head;
    while(iterator!=NULL)
    {
        n=n+1;
        iterator=iterator->next;
    }
    return n;
}
void displaySinglyLL(node **head)
{
    node *temp=*head;
    if(*head==NULL)
    {
        printf("Linked List is Empty\n");
    }
    else
    {
        printf("Linked List is\n");
        while(temp!=NULL)
        {
            printf("%d\t",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}
int insertElementSinglyLL(node **head,int n)
{
    int pos=0,counter;
    node *newNode=NULL,*current=*head,*iterator;
    newNode=(node *)malloc(sizeof(node));
    printf("Enter Node Data\n");
    scanf("%d",&newNode->data);
    newNode->next=NULL;
    printf("Where you want to insert? Enter Postion : \n");
    scanf("%d",&pos);
    if(pos>0 && pos<=n+1)
    {
        if(pos==1)
        {
            if(*head==NULL)
            {
                *head=newNode;
                printf("%d Inserted at Position : %d\n",newNode->data,pos);
            }
            else
            {
                newNode->next=*head;
                *head=newNode;
                printf("%d Inserted at Position : %d\n",newNode->data,pos);
            }
        }
        else
        {
            for(counter=1;counter<pos-1;counter++)
            {
                current=current->next;
            }
            newNode->next=current->next;
            current->next=newNode;
            printf("%d Inserted at Position : %d\n",newNode->data,pos);
        }
    }
    else
    {
        printf("Postion number should be Greater than 0 and Less than Equal to 'n+1'\n");
    }
    n=0;iterator=*head;
    while(iterator!=NULL)
    {
        n=n+1;
        iterator=iterator->next;
    }
    return n;
}
int deleteElementSinglyLL(node **head,int n)
{
    node *current=*head,*iterator=*head;
    int pos,counter;
    if(*head==NULL)
    {
        printf("Linked List is Empty\n");
    }
    else
    {
        printf("Enter postion of Node to Delete from Linked List\n");
        scanf("%d",&pos);
        if(pos>0 && pos<=n)
        {
            if(pos==1)
            {
                iterator=iterator->next;
                current->next=NULL;
                *head=iterator;
                printf("%d Deleted from Position : %d\n",current->data,pos);
                free(current);
            }
            else
            {
                current=*head;
                iterator=*head;
                iterator=iterator->next;
                for(counter=1;counter<pos-1;counter++)
                {
                    current=current->next;
                    iterator=iterator->next;
                }
                current->next=iterator->next;
                iterator->next=NULL;
                printf("%d Deleted from Position : %d\n",iterator->data,pos);
                free(iterator);
            }
        }
        else
        {
            printf("Postion number should be Greater than 0 and Less than Equal to 'n'\n");
        }
    }
    n=0;iterator=*head;
    while(iterator!=NULL)
    {
        n=n+1;
        iterator=iterator->next;
    }
    return n;
}
int deleteSinglyLL(node **head)
{
    node *iterator,*auxilaryNode;
    if(*head==NULL)
    {
        printf("Linked List is Empty\n");
    }
    else
    {
        iterator=*head;
        while(iterator)
        {
            auxilaryNode=iterator->next;
            free(iterator);
            iterator=auxilaryNode;
        }
        *head=NULL;
        printf("Deleted Singly Linked List completely\nLinked List is Empty\n");
    }
    return 0;
}
void modifySinglyLL(node **head)
{
    node *current=*head;
    int data;
    bool modified=false;
    printf("Enter Data from Linked List to Modify\n");
    scanf("%d",&data);
    if(*head==NULL)
    {
        printf("Linked List is Empty\n");
    }
    else
    {
        while(current)
        {
            if(data==current->data)
            {
                printf("Enter New Data\n");
                scanf("%d",&current->data);
                modified=true;
            }
            current=current->next;
        }
        if(modified==false)
        {
            printf("Data not Found\n");
        }
    }
}
void findElementSinglyLL(node **head)
{
    node *current=*head;
    int data,pos=0;
    bool search=false;
    if(*head==NULL)
    {
        printf("Linked List is Empty\n");
    }
    else
    {
        printf("Enter Data to Find in Linked List\n");
        scanf("%d",&data);
        while(current)
        {
            pos+=1;
            if(data==current->data)
            {
                search=true;
                printf("%d Found at Position : %d\n",data,pos);
            }
            current=current->next;
        }
        if(search==false)
        {
            printf("Data not Found\n");
        }
    }
}
int main()
{
    static int n=0;
    int opt;
    node *head=NULL;
    while(1)
    {
        printf("Choose an Operation for Singly Linked List -:\n0 : Display\n1 : Create List\n2 : Insertion\n3 : Deletion\n4 : Find\n5 : Modify\n6 : Delete List\n7 : Exit\n");
        fflush(stdin);
        scanf("%d",&opt);
        switch(opt)
        {
            case 0: displaySinglyLL(&head);
                    break;
            case 1: printf("Enter number of Nodes\n");
                    scanf("%d",&n);
                    n=createSinglyLL(&head,n);
                    displaySinglyLL(&head);
                    break;
            case 2: n=insertElementSinglyLL(&head,n);
                    displaySinglyLL(&head);
                    break;
            case 3: n=deleteElementSinglyLL(&head,n);
                    if(head!=NULL)
                    {
                        displaySinglyLL(&head);
                    }
                    break;
            case 4: findElementSinglyLL(&head);
                    break;
            case 5: modifySinglyLL(&head);
                    if(head!=NULL)
                    {
                        displaySinglyLL(&head);
                    }
                    break;
            case 6: n=deleteSinglyLL(&head);
                    if(head!=NULL)
                    {
                        displaySinglyLL(&head);
                    }
                    break;
            case 7: printf("Thank You");
                    exit(0);
            default : printf("Invalid Selection\n");
        }
    }
    return 0;
}