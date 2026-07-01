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
    
    printf("Enter Numbers In Array :- ");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",(p+i));
    }
      int max=*(p+0);
    for ( i = 0; i < 5; i++)
    {
        if (*(p+i)>=max)
        {
            max=*(p+i);
        }
        
    }
    printf("%d",max);
    free(p);
}