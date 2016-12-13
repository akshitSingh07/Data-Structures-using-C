#include<stdio.h>
#include<conio.h>
#include<string.h>
#define max 2
void sort();
void display();
void add();
void search();
struct employee
{
	char name[30];
	int id;
	int salary;
}e[max];
void main()
{
       int i,ch;
       char ans;
       clrscr();
       printf("\n1.search");
       printf("\n2.sort");
       printf("\n3.add employ");
       printf("\n4.display");
       do
       {
		fflush(stdin);
		printf("\nenter choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: search();
				break;
		     //	case 2: sort();
		     //		break;
			case 3: add();
				break;
			case 4: display();
				break;
		}
		fflush(stdin);
	printf("\nwant to cont:y or n");
	scanf("%c",&ans);
	}while(ans=='y');
	getch();
}
void add()
{
       int i;
       printf("enter details\n");
       for(i=0;i<max;i++)
       {
		printf("enter name  ");
		scanf("%s",e[i].name);
		printf("\nenter id  ");
		scanf("%d",&e[i].id);
		printf("\nenter salary ");
		scanf("%d",&e[i].salary);
	}
}
void display()
{
	int i;
	for(i=0;i<max;i++)
	{
		printf("\nname of %d person is %s",i+1,e[i].name);
		printf("\nid is %d",e[i].id);
		printf("\nsalary is %d\n\n",e[i].salary);
	}
}
void search()
{
	int i,flag=0,key;
	printf("\nenter persons id to search");
	scanf("%d",&key);
	for(i=0;i<max;i++)
	{
		if(e[i].id==key)
		{
			flag++;
			break;
		}
	}
      //	printf("\n%d",i);
      //	printf("\n%d",key);
     //		printf("\n%d",e[i].id);
	if(flag==1)
	{
		printf("\nname of %d person is %s",i+1,e[i].name);
		printf("\nid is %d",e[i].id);
		printf("\nsalary is %d",e[i].salary);
	}
	else
	printf("not found");
}

