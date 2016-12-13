#include<stdio.h>
int main()
{
	int t,i,j,m;
	int a[4]={5,3,2,1};					// search for smallest in array i.e. 1 so 1,3,2,5 
	for(i=0;i<4;i++)					// then start from i=1 find smallest from 3 to 2 to 5 as 2 is smallest so 1,2,3,5
 	{									//since for loop runs for two times so O(n^2)
		 m=i;
		for(j=i;j<4;j++)
		{
			if(a[m]>a[j])
			m=j;	
		}
		t=a[i];
		a[i]=a[m];
		a[m]=t;
	}
	for(i=0;i<4;i++)
	printf("%d",a[i]);
}
