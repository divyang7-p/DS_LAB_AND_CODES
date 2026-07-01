#include<stdio.h>
void main(){
    int a;
    printf("Enter A Number :- ");
    scanf("%d",&a);
    if(a%2==0){
        printf("Given Number Is Even..");
    }
    else{
        printf("Given Number Is Odd..");
    }
}