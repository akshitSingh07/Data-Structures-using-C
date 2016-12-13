#include<stdio.h>
#include<conio.h>
#define max 5
int s[max];
int top=-1;
void push(int x)
{
	if(top==max-1)
	printf("overflow");
	else
	top++;
	s[top]=x;
}
void pop()
{
	if(top==-1)
	printf("underflow");
	else
	top--;
}
void display()
{
	int i;
	for(i=0;i<=top;i++)
	printf("\n%d\n",s[i]);
}
void main()
{
	int ch=0,x;
	clrscr();
	do
	{
		printf("\n 0. exit  \n 1. push  \n 2 .pop  \n 3. display\n");
		printf("enter choice  ");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1: printf("enter data");
			scanf("%d",&x);
			push(x);
			break;
		case 2: pop();
			break;
		case 3: display();
			break;
		}
	 }while(ch==0);
	 getch();
}
