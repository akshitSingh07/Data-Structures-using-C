#include <stdio.h> 
void quick_sort(int [], int, int); 
int partition(int [], int, int); 
main() 
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
 getch(); 
} 
void quick_sort(int a[], int beg, int end) 
{ 
 int x; 
 if (beg < end) 
 { 
 x = partition(a, beg, end); 
 quick_sort(a, beg, x-1); 
 quick_sort(a, x+1, end); 
 } 
}  
int partition(int a[], int beg, int end) 
{ 
 int loc = beg, temp; 
 while (1) 
 { 
 while (a[loc]<=a[end] && loc!=end) /* Scan from right to 
 left */ 
 end--; 
  if (loc == end) 
 return loc; 
 temp = a[loc]; 
 a[loc] = a[end]; 
 a[end] = temp; 
 loc = end; 
 while (a[loc]>=a[beg] && loc!=beg) /* Scan from left to 
 right */ 
 beg++; 
 if (loc == beg) 
 return loc; 
 temp = a[loc]; 
 a[loc] = a[beg]; 
 a[beg] = temp; 
loc = beg; 
 } 
}

