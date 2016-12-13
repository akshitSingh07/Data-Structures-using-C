#include <stdio.h>
void merge_sort(int [], int, int);
void merge_array(int [], int, int, int);
int main()
{
 int a[50], n, i;
 printf("\nEnter size of an array: ");
 scanf("%d", &n);
 printf("\nEnter elements of an array:\n");
 for(i=0; i<n; i++)
 scanf("%d", &a[i]);
 merge_sort(a, 0, n-1);
 printf("\n\nAfter sorting:\n");
 for(i=0; i<n; i++)
 printf("\n%d", a[i]);
return 0;
}
void merge_sort(int a[],int beg,int end)
{
	int mid;
	if(beg<end)
	{
		mid=(beg+end)/2;
		merge_sort(a,beg,mid);
		merge_sort(a,mid+1,end);
		merge_array(a,beg,mid,end);
	}
}

void merge_array(int a[],int beg,int mid,int end)
{
	int i,j,k,b[50]; // b must be 50 i.e. equal to size of a
	for(i=0;i<=end;i++)  // i must start from beg to n-1 i.e. end
	b[i]=a[i];			 //coping elements from array a to array b
	i=beg;
	j=mid+1;
	k=beg;
	while((i<=mid) && (j<=end))
	{
		if(b[i]<=b[j])
		{
			a[k++]=b[i++];
		}
		if(b[i]>=b[j])
		{
			a[k++]=b[j++];
		}
	}
	if(i<=mid)
	{
		while(i<=mid)
		a[k++]=b[i++];
	}
	if(j<=end)
	{
		while(j<=end)
		a[k++]=b[j++];
	}
}

