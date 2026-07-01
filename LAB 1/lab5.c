#include<stdio.h>
void main(){
    int y;
    printf("Enter A Year :- ");
    scanf("%d",&y);
    if(y%4==0 && y%100!=0){
     printf("Entered year Is Leap..");
    }
    else if (y%400==0)
    {
        printf("Entered year Is Leap..");
    }
    else{
        printf("Entered year Is Not Leap..");
    }
}