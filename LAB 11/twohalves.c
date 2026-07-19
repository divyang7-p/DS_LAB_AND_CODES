#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node * link;
};
struct node * first=NULL;
struct node * last =NULL;
struct node * head1=NULL;
struct node * head2=NULL;
int nc=0;
void insertion(int x){
    struct node * newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    if (first==NULL)
    {
        newnode->info=x;
        newnode->link=newnode;
        first=newnode;
        last=newnode;
    }
    else{
        newnode->info=x;
        newnode->link=first;
        last->link=newnode;
        first=newnode;
    }
}
void splitting(){
struct node * slow=first;
struct node * fast=first;
while (fast->link!=first && fast->link->link!=first)
{
    slow=slow->link;
    fast=fast->link->link;
}
if(fast->link->link==first){
    fast=fast->link;
}
head1=fast->link;
head2=slow->link;
slow->link=head1;
fast->link=head2;
}
void display(struct node * l){
    struct node *temp=l;
    do{
        printf("%d\n",temp->info);
        temp=temp->link;
        nc++;
    }while(temp!=l);
}
void main(){
    insertion(5);
    insertion(7);
    insertion(8);
    insertion(59);
    insertion(54);
    insertion(56);
    display(first);
    printf("Number OF node = %d",nc);
    splitting();
    printf("First Half :- \n");
    display(head1);
    printf("Second Half:- \n");
    display(head2);
}