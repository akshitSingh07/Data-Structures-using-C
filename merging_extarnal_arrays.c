void merge_sort(int a[],int b[],int c[],int,int);
void main()
{
	int a[50],b[50],c[100];
	int i,j,k,s1,s2;
	clrscr();
	//input size of first array
	printf("\nEnter size of array 1:\t");
	scanf("%d",&s1);
	//input size of second array
	printf("\nEnter size of array 2:\t");
	scanf("%d",&s2);
	//values in first array
	for(i=0;i<s1;i++)
	{
		printf("\nEnter value:\t");
		scanf("%d",&a[i]);
	}
	//values in second array
	for(i=0;i<s2;i++)
	{
		printf("\nEnter value:\t");
		scanf("%d",&b[i]);
	}
	merge_sort(a,b,c,s1,s2);
	getch();
}
void merge_sort(int a[], int b[], int c[], int s1, int s2)
{
	int i,j,k,s3;
	for(i=0,j=0,k=0;i<s1 && j<s2;)
	{
		if(a[i]<b[j])
		{
			c[k++]=a[i++];
		}
		else if(a[i]>b[j])
		{
			c[k++]=b[j++];
		}
		else
		{
			c[k++]=a[i++];
			c[k++]=b[j++];
		}
	}
	//copy remaining values of array 1
	if(i<s1)
	{
		while(i<s1)
		{
			c[k++]=a[i++];
		}
	}
	//copy remaining values of array 2
	if(j<s2)
	{
		while(j<s2)
		{
			c[k++]=b[j++];
		}
	}
	//display resultant array
	s3=s1+s2;
	printf("\nResultant array is: \n");
	for(i=0;i<s3;i++)
		printf("%d\t",c[i]);
}
