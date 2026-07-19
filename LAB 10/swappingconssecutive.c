#include<stdio.h>
#include<stdlib.h>
struct node {
    int info;
    struct node * link;
};
struct node * first=NULL;
void insertion(int x){
    struct node * new=NULL;
    new=(struct node *)malloc(sizeof(struct node));
    if(new==NULL){
        printf("Memory Allocation Failed..");
    }
    new->info=x;
    new->link=first;
    first=new;
}
void swappp(){
    struct node *prev=first;
    struct node *temp=first;
    struct node *next=NULL;
    while (temp!=NULL && temp->link!=NULL)
    {
        next=temp->link;
        temp->link=next->link;
       next->link=temp;
       if(prev==NULL){
        first=next;
       }
       else{
        prev->link=next;
       }
       prev=temp;
       temp=temp->link;
    }
}
void display(){
    struct node * temp=first;
    while (temp!=NULL)
    {
        printf("%d\n",temp->info);
        temp=temp->link;
    }
}
void main(){
    insertion(5);
    insertion(4);
    insertion(6);
    insertion(2);
    insertion(1);
    printf("Linked List :- \n");
    display();
    printf("After Swapping :- \n");
    swappp();
    display();
}