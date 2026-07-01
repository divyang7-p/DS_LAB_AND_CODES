#include<stdio.h>
void main(){
    int a;
    int b;
    int c;
    printf("Enter Three Integer NUmbers :- ");
    scanf("%d %d %d",&a,&b,&c);
    
     if (a>b && a>c)
     {
        printf("%d Is Largest Number..",a);
     }
     else if (b>a && b>c)
     {
        printf("%d Is Largest Number..",b);
     }
     else{
         printf("%d Is Largest Number..",c);
     }
     
     
}