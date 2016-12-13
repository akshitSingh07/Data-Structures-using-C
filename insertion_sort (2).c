#include<stdio.h>
int main()
{
	int i,t,j,m;
	int a[5]={5,2,3,1,4};
	for(i=1;i<5;i++)
	{
		t=a[i];                        // t gets smallest value and remain unchanged and at last step put in a[0] i.e. 1st place
		j=i-1;
		while(a[j]>t && j>=0)
		{
			a[j+1]=a[j];               // a[j+1] gets big value 
			j--;                      //  now a[0] is vacant always at last comparison
				                     //   and after j-- ; j=-1 now it will not return to loop as j>=0
		}
		a[j+1]=t;                  // a[0] gets smallest value stored in t
	}
	for(i=0;i<5;i++)
	printf("%d",a[i]);
}

