#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

/*typedef struct_point
{
	int x,y;
}point;*/
typedef struct node
{
//	point a;
	int data;
	struct node *next;
	struct node *prev;
}node;
node *start=NULL,*temp,*curr,*ptr,*loc;
void create()
{
	int num;
	char c;
	do
	{
	temp=(node*)malloc(sizeof(node));
	printf("\nenter no : ");
	scanf("%d",&num);
	temp->data=num;
	temp->next=NULL;
	temp->prev=NULL;
	if(start==NULL)
	{
		start=curr=temp;

	}
	else
	{
		curr->next=temp;
		temp->prev=curr;
		curr=temp;
	}
	printf("\nwant to cont!y or n :\t");
       //	scanf("%c",c);
	c=getche();
	}while(c=='y');
}
void display()
{
	/*int i;
	for(ptr=start;ptr!=NULL;ptr=ptr->next)
	{
		printf("%d->",ptr->data);
	}*/
	
	int K,data;
	printf("enter k");
	scanf("%d",&K);
	if(K==0)
	{
	for(ptr=start;ptr!=NULL;ptr=ptr->next)
		printf("\n%d",ptr->data);
		//printf(" %d",ptr->point->y);
	}
	if(K==1)
	{
	{		
	 for(ptr=curr;ptr!=start;ptr=ptr->prev)
		printf("\n%d",ptr->data);
		//printf(" %d",ptr->point->y);
	}
	printf("\n%d",ptr->data);
	}
	printf("\n");
}

void ins()
{
	int num;
	temp=(node*)malloc(sizeof(node));
	printf("\nenter no : ");
	scanf("%d",&num);
	temp->data=num;
	temp->next=NULL;
	temp->next=start;
	start->prev=temp;
	start=temp;
}
void pos()
{
	int num,i,pos;
	temp=(node*)malloc(sizeof(node));
	printf("\nenter no : ");
	scanf("%d",&num);
	temp->data=num;
	temp->next=NULL;
	printf("\nENTER POS");
	scanf("%d",&pos);
	for(i=1,ptr=start;i<pos;i++)
	{
		loc=ptr;
		ptr=ptr->next;
	}
	temp->next=ptr;
	temp->prev=loc;
	loc->next=temp;
	ptr->prev=temp;
	if(temp->next==NULL)
	{
		curr=temp;
	}
}
void last()
{
	int num;
	temp=(node*)malloc(sizeof(node));
	printf("\nenter no : ");
	scanf("%d",&num);
	temp->data=num;
	temp->next=NULL;
	curr->next=temp;
	temp->prev=curr;
	curr=temp;
}
void del_ins()
{
	temp=(node*)malloc(sizeof(node));
	temp=start;
	start=start->next;
	start->prev=NULL;
	free(temp);
}
void del_end()
{
	temp=(node*)malloc(sizeof(node));
	temp=curr;
	curr=curr->prev;
	curr->next=NULL;
	free(temp);
}
void del_mid()
{
	int i,pos;
	printf("\nENTER POS");
	scanf("%d",&pos);
	temp=(node*)malloc(sizeof(node));
	for(i=1,ptr=start;i<pos;i++)
	{
		loc=ptr;
		ptr=ptr->next;
	}
	temp=ptr;
	loc->next=ptr->next;
	ptr=ptr->next;
	ptr->prev=loc;
	free(temp);
}
int main()
{
	int x;
	char c;
	//clrscr();
	printf("\n1.create\n2.display\n3.insert\n4.position\n5.insertion last\n6.delete beg\n7.delete end\n8.delete mid");
	do
	{
	printf("\nenter choice :\t  ");
	scanf("%d",&x);
	switch(x)
	{
	case 1 : create();
		break;
	case 2: display();
		break;
	case 3: ins();
		break;
	case 4: pos();
		break;
	case 5: last();
		break;
	case 6: del_ins();
		break;
	case 7: del_end();
		break;
	case 8: del_mid();
		break;
	}
	printf("\ndo u want to cont! Y/N");
	c=getche();
	}while(c=='y');

	getch();
}
