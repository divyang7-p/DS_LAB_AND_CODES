#include<stdio.h>
void main(){
    int ts;
    printf("Enter Total Seconds :- ");
    scanf("%d",&ts);
    int s;
    int h;
    int m;
    h=ts/3600;
    m=(ts%3600)/60;
    s=(ts%60);
    printf("%d:%d:%d",h,m,s);
}