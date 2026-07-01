#include<stdio.h>
#include<stdbool.h>
bool primenom(int x);
bool primenom(int x){
    int i;
    for ( i = 2; i < x; i++)
    {
       if(x%i==0){
        return  false;
       }
    
    }
    return true;
}
void main(){
    int n;
    printf("Enter A number :- ");
    scanf("%d",&n);
    bool b=primenom(n);
    if(b){
        printf("Prime..");
    }
    else{
        printf("Not Prime..");
    }
}

    
