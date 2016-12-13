#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}node;
void printList(struct node *start)
{
    struct node *ptr = start;
    for(;ptr!=NULL;ptr=ptr->next){
        printf("%d->", ptr->data);      
    }
}
static void reverse(struct node** start)
{   
    struct node* prev   = NULL;
    struct node* current = *start;
    struct node* next;
    while (current != NULL)
    {
        next  = current->next;  
        current->next = prev;   
        prev = current;
        current = next;
    }
	*start= prev;
}  
void push(struct node** start, int num)
{
	struct node* temp=(struct node*) malloc(sizeof(struct node));
	//printf("\nenter no : ");
	//scanf("%d",&num);
	temp->data=num;
	temp->next=NULL;
	temp->next=*start;
	*start=temp;

}
/*
void create(struct node** start,int num)
{
	//int num;
	char c;
	do
	{
	struct node* temp=(struct node*) malloc(sizeof(struct node));
	//struct temp=(node*)malloc(sizeof(node));
	printf("\nenter no : ");
	scanf("%d",&num);
	temp->data=num;
	temp->next=NULL;
	if(start==NULL)
	{
		start=curr=temp;
	}
	else
	{
		curr->next=temp;
		curr=temp;
	}
	printf("\nwant to cont!y or n :\t");
       //	scanf("%c",c);
	c=getche();
	}while(c=='y');
}
*/
int main()
{
    struct node* start = NULL;  
     push(&start,1);
     push(&start,2);
     push(&start,3); 
     push(&start,4);     
     
     printList(start);    
     reverse(&start);                      
     printf("\n Reversed Linked list \n");
     printList(start);    
}
