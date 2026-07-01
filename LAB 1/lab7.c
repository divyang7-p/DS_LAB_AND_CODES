#include<stdio.h>
void main(){
    int td;
    printf("Enter Number Of total days :- ");
    scanf("%d",&td);
    int y;
    int w;
    int d;
    y=td/365;
    w=(td%365)/7;
    d=(td%365)%7;
    printf("%d Years,%d Weeks,%d Days",y,w,d);

}