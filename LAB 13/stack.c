#include <stdio.h>
int size= 10;
int top = -1;
int s[10];

void push(int x)
{
    if (top >= size - 1)
    {
        printf("Stack Overflow..");
        return;
    }
    else{
        top=top+1;
        s[top]=x;
    }
}
void display(){
    for ( int i = top; i >= 0; i--)
    {
        printf("%d\n",s[i]);
    }
    
}
int pop(){
    if(top==-1){
        printf("Stack Underflow..");
        return -1;
    }
    else{
        top=top-1;
        int y=s[top+1];
        return y;
    }
}
int peep (int i){
    if(top==-1){
        printf("Stack UnderFlow..");
        return -1;
    }
    else
    {
        int x;
        x=s[top-i+1];
        return x;
    }
}
void change(int i,int val){
    if(top==-1){
        printf("Stack Underflow..");
        return;
    }
    else{
        s[top-i+1]=val;
    }
}
void main()
{
    push(5);
    push(6);
    push(7);
    push(8);
    push(9);
    display();
}