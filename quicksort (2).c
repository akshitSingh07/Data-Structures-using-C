#include <stdio.h> 
void quick_sort(int [], int, int); 
int partition(int [], int, int); 
int main() 
{ 
int a[50], n, i; 
printf("\nEnter size of an array: "); 
scanf("%d", &n); 
printf("\nEnter elements of an array:\n"); 
 for(i=0; i<n; i++) 
 scanf("%d", &a[i]); 
 quick_sort(a, 0, n-1); 
 printf("\n\nAfter sorting:\n"); 
 for(i=0; i<n; i++) 
 printf("\n%d", a[i]); 
}
void quick_sort(int a[],int beg,int end)
{
	int p;
	if(beg<end)
	{
	p=partition(a,beg,end);
	quick_sort(a,beg,p-1);
	quick_sort(a,p+1,end);
	}
}
int partition(int a[],int beg,int end)
{
	int i,j,t,x;
	i=beg;
	j=end;
	x=a[beg];
	while(1)
	{
		while(a[i]<=x && i<end)
		i++;
		while(a[j]>=x && j!=beg)
		j--;
		if(i<j)
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
		else
		{
			t=a[beg];
			a[beg]=a[j];
			a[j]=t;
		return j;
		}
	}

