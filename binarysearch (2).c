#include<stdio.h>
void bsearch(int a[],int,int);
int main()
{
	int a[50];
	int i,n,s1;
	printf("\nEnter size of array 1:\t");
	scanf("%d",&s1);
	for(i=0;i<s1;i++)
	{
		printf("\nEnter value:\t");
		scanf("%d",&a[i]);
	}
	printf("enter no");
	scanf("%d",&n);
	bsearch(a,s1,n);
return 0;
}
void bsearch(int a[],int s1,int n)
{
	int mid,beg=0,end=s1-1,flag=0;

	while(beg<=end)
	{
		mid=(beg+end)/2;
		if(n==a[mid])
		{
			printf("no found at %d",mid+1);
		    flag++;
		    break;
		}
		if(n>a[mid])
		beg=mid;
		if(n<a[mid])
		end=mid-1;
	 }
	 if(flag==0)
	 printf("not found");
}
