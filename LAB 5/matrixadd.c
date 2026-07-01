#include<stdio.h>
void main(){
    int a[2][2];
    int b[2][2];
    int i;
    int j;
    printf("Enter Element In a Matrix :- ");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j< 2; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("Enter Element In b Matrix :- ");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j< 2; j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }
    int c[2][2];
    for ( i = 0; i < 2; i++)
    {
    
        for ( j = 0; j < 2; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
        
    }
    for ( i = 0; i < 2; i++)
    {
       for ( j = 0; j < 2; j++)
       {
        printf("%d ",c[i][j]);
       }
       printf("\n");
    }
}