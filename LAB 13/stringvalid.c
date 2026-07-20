#include<stdio.h>
#define size 100
int top=-1;
char s[size];
void push(char c){
    if(top>=size-1){
        printf("Stack Overflow..");
        return;
    }
    else{
        top=top+1;
        s[top]=c;
    }
}
char pop(){
    if(top==-1){
        printf("Stack UnderFlow..");
        return '0';
    }
    else{
        top=top-1;
        char a=s[top+1];
        return a;
    }
}
void stringmatch(char a[]){
    int i=0;
    while (a[i]!='c')
    {
        push(a[i]);
        i++;
    }
    if(a[i]!='c'){
        printf("Not Valid..");
        return;
    }
    i++;
    while (a[i]!='\0')
    {
        if(top==-1 || s[top]!=a[i]){
            printf("Not Valid..");
            return;
        }
        else{
            pop();
            i++;
        }
    }
    if(top==-1 && a[i]=='\0'){
        printf("Valid..");
        return;
    }
    else{
        printf("Not Valid..");
        return;
    }
}
void main(){
    printf("Enter A string :- ");
    char string[100];
    scanf("%s",string);
    stringmatch(string);
}