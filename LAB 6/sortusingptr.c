#include<stdio.h>
#include<stdlib.h>
void main(){
    int i;
    int *p;
    p=(int *)(malloc(sizeof(int)*5));
    if (p==NULL)
    {
        printf("Memory Allocation Failed..");
    }
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",(p+i));
    }
    int j;
    int temp;
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 5-i-1; j++)
        {
            if (*(p+j)>=*(p+j+1))
            {
                temp=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=temp;
            }
            
        }
        
    }
    for ( i = 0; i < 5; i++)
    {
        printf("%d ",*(p+i));
    }
    free(p);
}