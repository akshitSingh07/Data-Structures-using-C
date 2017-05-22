#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{    
    long s;    
    scanf("%d",&s);
    // allocating memory dynamically
    int *a=(int*)malloc(2*s*sizeof(int));
    int Top=-1;
    int t,x=0;
    scanf("%d",&t);
    char oper[20];
    while(x!=t){
  
        scanf("%s",oper);
        if(strcmp(oper,"pop")==0)
        {
            if(Top==-1){
                printf("-1\n");
            }
            else{
            int k=a[Top];
            Top--;
            printf("%d\n",k);
            }
        
        }
        else if(strcmp(oper,"push")==0){
            
                int i;
                scanf("%d\n",&i);
                Top++;
                a[Top]=i;
                printf("1\n");
            
 
        }
        else if(strcmp(oper,"isempty")==0){
            if(Top==-1){
                printf("1\n");
            }
            else{
                printf("0\n");
            }
                                    
        }        
        else if(strcmp(oper,"top")==0){
        
            if(Top==-1){
                printf("-1\n");
                
            }
            else{
                printf("%d\n",a[Top]);
            }
        
        }
        x=x+1;
    }
      return 0;
}

