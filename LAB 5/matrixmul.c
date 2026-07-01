#include<stdio.h>
void main(){
    int r1=3;
    int c1=2;
    int r2=2;
    int c2=3;
    int a[r1][c1];
    int b[r2][c2];
    int c[r1][c2];
    if(c1!=r2){
        printf("Multiplication Not Possible..");
    }
    int i;
    int j;
    int k;
    printf("Enter  Element Of a :- ");
    for(i=0;i<r1;i++){
        for ( j = 0; j < c1; j++)
        {
            scanf("%d",&a[i][j]);
        }  
    }
    printf("Enter  Element Of b :- ");
     for(i=0;i<r2;i++){
        for ( j = 0; j < c2; j++)
        {
            scanf("%d",&b[i][j]);
        }  
    }
    for ( i = 0; i < r1; i++)
    {
        for ( j = 0; j < c2; j++)
        {
            c[i][j]=0;
            for ( k = 0; i < c1; k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
            
        }
    }
    for ( i = 0; i < r1; i++)
    {
        for ( j = 0; j < c2; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    
    
}