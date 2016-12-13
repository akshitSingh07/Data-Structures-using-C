#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
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
void display()
{
	int i;
	for(ptr=start;ptr!=NULL;ptr=ptr->next)
	{
		printf("%d-->",ptr->data);
	}
	printf("NULL");
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
	for(i=1,ptr=start;i<pos-1;i++)
	{
		ptr=ptr->next;
	}
	temp->next=ptr->next;
	ptr->next=temp;
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
	curr=temp;
}
void del_ins()
{
	temp=(node*)malloc(sizeof(node));
	temp=start;
	start=start->next;
	free(temp);
}
void del_end()
{
	temp=(node*)malloc(sizeof(node));
	for(ptr=start;ptr!=NULL;ptr=ptr->next)
	{
		loc=ptr;
	}
	temp=ptr;
	loc->next=NULL;
	free(temp);
}
void del_mid()
{
	int i,pos;
	printf("\nENTER POS");
	scanf("%d",&pos);
	temp=(node*)malloc(sizeof(node));
	for(i=1,ptr=start;i<pos-1;i++)
	{
		loc=ptr;
		ptr=ptr->next;
	}
	temp=ptr;
	loc->next=ptr->next;
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

	//getch();
}



