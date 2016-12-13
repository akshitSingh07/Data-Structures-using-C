#include<stdio.h>
#include<stdlib.h>
struct node{
	int n;
	struct node *next;
}*start=NULL,*temp,*t,*t1;
void insert(int x){
	if(start==NULL){
		start=(struct node*)malloc(sizeof(struct node));
		start->n=x;
		start->next=NULL;
		t1=start;
	}
	else{
		temp=(struct node*)malloc(sizeof(struct node));
		start->next=temp;
		temp->n=x;
		temp->next=NULL;
		start=temp;	
	}
	
}
void display(int m,int n){
	t=t1;
	int c=1,i;
	while(t!=NULL){
		if(c==1){
		
		for(i=1;i<=m;i++){
			printf("%d",t->n);
			t=t->next;
		}
			c=0;
		}
		else{
			for(i=1;i<=n;i++){
				t=t->next;
			}
			c=1;
		}
	}
}
int main(){
	int i,k;
	for(i=0;i<6;i++){
		scanf("%d",&k);
		insert(k);
	
	}
	
	
	display(2,2);
return 0;	
	
}
