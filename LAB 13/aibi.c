#include<stdio.h>
#define size 100
int top=-1;
char s[size];
void push(char c){
    if(top>=size-1){
        printf("Stack OverFlow..");
        return;
    }
    else{
        top=top+1;
        s[top]=c;
    }
}
char pop(){
    if(top==-1){
        printf("Stack Underflow..");
        return '0';
    }
    else{
        top=top-1;
        char x;
        x=s[top+1];
        return x;
    }
}
void determinestr(char st[]){
    int i=0;
    while(st[i]!='b'){
        push(st[i]);
        i++;
    }
    if(st[i]!='b'){
        printf("Invalid..");
        return;
    }
    while (st[i]!='\0')
    {
       if(top==-1 || st[i] != 'b'){
        printf("Invalid");
        return;
       }
       else{
        pop();
        i++;
       }
    }
    if(top==-1 && st[i]=='\0'){
        printf("Valid..");
        return;
    }
    else{
        printf("InValid.");
        return;
    }
    
}
void main(){
    char str[100];
    printf("Enter A String :- ");
    scanf("%s",str);
    determinestr(str);
}