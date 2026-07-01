#include<stdio.h>
#include<stdbool.h>
bool primenom(int x);
void main(){
    int a;
    int b;
    printf("Enter a range separated by space :- ");
    scanf("%d %d",&a,&b);
    int i;
    
    for(i=a;i<=b;i++){
        
        if (primenom(i))
        {
            printf("%d,",i);
        }
        
    }
}
bool primenom(int x){
    int i;
    for ( i = 2; i < x; i++)
    {
        if(x%i==0){
        return  false;
        break;
       }    
    }
    return true;
}
