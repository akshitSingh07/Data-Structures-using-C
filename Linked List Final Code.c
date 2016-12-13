#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct point
{
	long int x, y;
}point;

typedef struct node
{
	point a;
	struct node *next;
	struct node *prev;
}node;

int c=0;

void createlist(node **start, node **curr)
{
	if (c==1)
		return	;
	else
	{
		c = 1;
		(*start) = (*curr) = NULL;
	}
}

void printlist (node *start, node *curr, int K)
{
	if (start == NULL && curr== NULL)
		printf ("NULL\n\n");
	else if (K == 0)
	{
		while (start != NULL)
		{
			printf ("%d %d\n", ((start -> a).x), ((start -> a).y));
			start = start -> next;
		}
		printf ("\n");
	}
	else if (K == 1)
	{
		while (curr != NULL)
		{
			printf ("%d %d\n", ((curr -> a).x), ((curr -> a).y));
			curr= curr-> prev;
		}
		printf ("\n");
	}
}
void insertbeg (node **start, node **curr, int x, int y)
{
	if (c!= 1)
		createlist(&(*start), &(*curr));

	if ((*start) == NULL && (*curr) == NULL)
	{
		(*start) = (node *) malloc (sizeof(node));
		(*curr) = (*start);
		((*start) -> a).x = x;
		((*start) -> a).y = y;
		(*start) -> next = NULL;
		(*start) -> prev = NULL;
	}
	else
	{
		node *new = NULL;
		new = (node *) malloc (sizeof(node));
		(new -> a).x = x;
		(new -> a).y = y;
		new -> next = (*start);
		new -> prev = NULL;
		(*start) -> prev = new;
		(*start) = new;
		new = NULL;
		free(new);
		new = NULL;
	}
}

void insertend (node **start, node **curr, int x, int y)
{
	if (c != 1)
		createlist(start,curr);

	if ((*start) == NULL && (*curr) == NULL)
	{
		(*start) = (node *) malloc (sizeof(node));
		(*curr) = (*start);
		((*start) -> a).x = x;
		((*start) -> a).y = y;
		(*start) -> next = NULL;
		(*start) -> prev = NULL;
	}
	else
	{
		node *new = NULL;
		new = (node *) malloc (sizeof(node));
		(new -> a).x = x;
		(new -> a).y = y;
		new -> next = NULL;
		new -> prev = (*curr);
		(*curr) -> next = new;
		(*curr) = new;
		new = NULL;
		free(new);
		new = NULL;
	}
}

void deletebeg (node **start, node **curr)
{
	node *temp = NULL;

	if ((*start) == NULL && (*curr) == NULL)
		;
	else if ((*start) == (*curr))
	{
		temp = (*start);
		(*start) = (*start) -> next;
		(*curr) = (*start);
		free(temp);
		temp = NULL;
		c = 0;
	}
	else
	{
		temp = (*start);
		(*start) = (*start) -> next;
		(*start) -> prev = NULL;
		free(temp);
		temp = NULL;
	}
}

void deletelast (node **start, node **curr)
{
	node *temp = NULL;

	if ((*start) == NULL && (*curr) == NULL)
		return;
	else if ((*curr) == (*start))
	{
		temp = (*curr);
		(*curr) = (*curr) -> prev;
		(*start) = (*curr);
		free(temp);
		temp = NULL;
		c = 0;
	}
	else
	{
		temp = (*curr);
		(*curr) = (*curr) -> prev;
		(*curr) -> next = NULL;
		free(temp);
		temp = NULL;
	}
}

void deletelist (node **start, node **curr)
{
	while ((*start) != NULL)
	{
		deletebeg (&(*start), &(*curr));
	}
	if ((*start) == NULL && (*curr) == NULL)
	{
		;
	}

	c = 0;
}

int main()
{
    node *start=NULL,*curr=NULL;
    char s[20];
    int x,y;
    while(1)
    {
        scanf("%s",s);
        if(strcmp(s,"0")==0)
            break;
            if(strcmp(s,"createlist")==0)
            {
                createlist(&start,&curr);
            }
            if(strcmp(s,"printlist")==0)
            {
                scanf("%d",&x);
                printlist(start,curr,x);
            }
			if(strcmp(s,"insertbeg")==0)
            {
                scanf("%d %d",&x,&y);
                insertbeg(&start,&curr,x,y);
            }
            if(strcmp(s,"insertend")==0)
            {
                scanf("%d %d",&x,&y);
                insertend(&start,&curr,x,y);
            }
            if(strcmp(s,"deletebeg")==0)
            {
                deletebeg(&start,&curr);
            }
            if(strcmp(s,"deletelast")==0)
            {
                deletelast(&start,&curr);
            }
            if(strcmp(s,"deletelist")==0)
            {
                deletelist(&start,&curr);
            }
           
    }
    return 0;
}
