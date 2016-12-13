#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
typedef struct node
{
	int data;
	struct node *left;
	struct node *right;
}node;
node *root=NULL, *temp;
node*insert(node*,node*);
int c=0,flag=0;
node* create()
{
	char choice='y';
	int ch;
	while(choice=='y'||choice=='Y')
	{
		printf("\nEnter number:\t");
		scanf("%d",&ch);
		temp=(node*)malloc(sizeof(node));
		temp->data=ch;
		temp->left=NULL;
		temp->right=NULL;
		root=insert(root,temp);
		printf("\nDo you want to insert another node ? (Y/N):\t");
		choice=getche();
	}
	return root;
}
node* insert(node *r, node *t)
{
	if(r==NULL)
	{
		r=t;
	}
	else
	{
		if(t->data>=r->data)
		{
			r->right=insert(r->right,t);
		}
		else
		{
			r->left=insert(r->left,t);
		}
	}
	return r;
}
void inorder(node *r)
{
	if(r->left!=NULL)
	{
		inorder(r->left);
	}
	printf("%d->",r->data);
	if(r->right!=NULL)
	{
		inorder(r->right);
	}
}
int count_nodes(node *r)
{
	int count=1;
	if(r->left!=NULL)
	{
		count++;
		count_nodes(r->left);
	}
	count++;
	if(r->right!=NULL)
	{
		count++;
		count_nodes(r->right);
	}
	return count;
}
void count(node *r)
{
	if(r!=NULL)
	{
		c++;
		count(r->left);
		count(r->right);
	}
}
void search(node *r,int num)
{
	if(r->data==num)
		flag=1;
	if(r->left!=NULL)
		search(r->left,num);
	if(r->right!=NULL)
		search(r->right,num);
}
void preorder(node *r)
{
	printf("%d->",r->data);
	if(r->left!=NULL)
		preorder(r->left);
	if(r->right!=NULL)
		preorder(r->right);
}
void postorder(node *r)
{
	if(r->left!=NULL)
		postorder(r->left);
	if(r->right!=NULL)
		postorder(r->right);
	printf("%d->",r->data);
}

int main()
{
	char ch='y';
	int n,num;
	//clrscr();
	while(ch=='y'||ch=='Y')
	{
		//clrscr();
		printf("\n1.Create tree");
		printf("\n2.Inorder traversal");
		printf("\n3.Preorder traversal");
		printf("\n4.Postorder traversal");
		printf("\n5. Search a number");
		printf("\nEnter your choice:\t");
		scanf("%d",&n);
		switch(n)
		{
			case 1:		create();
					break;
			case 2:         printf("\nInorder traversal:\n");
					inorder(root);
					count(root);
					printf("Number of nodes in tree=%d",c);
					break;
			case 3:         printf("\nPreorder traversal:\n");
					preorder(root);
					break;
			case 4:         printf("\nPostorder traversal:\n");
					postorder(root);
					break;
			case 5:         printf("\nEntre number to search in tree ?\t");
					scanf("%d",&num);
					search(root,num);
					if(flag==1)
					{
						printf("\nFound");
						flag=0;
					}
					else
						printf("\nNot Found");
					break;
			default:	printf("\nWrong choice entered !!");
		}
		printf("\nDo u want to perform another operation ? (Y/N):\t");
		ch=getche();
	}
	//getch();
}
