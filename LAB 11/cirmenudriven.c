#include<stdio.h>
#include<stdlib.h>
struct node {
    int info;
    struct node * link;
};
struct node* first=NULL;
struct node * last=NULL;
void insertion(int x){
    struct node * newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    if(first==NULL){
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
void display(){
    struct node* temp=first;
   do{
    printf("%d\n",temp->info);
    temp=temp->link;
   }while (temp!=first);    
}
void insertionatend(int x){
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
        last=newnode;
    }
    display();
    
}

void deletefromfirst(){
    struct node * temp=first;
    first=first->link;
    last->link=first;
    free(temp);
    display();
}
void deletefromlast(){
    struct node * temp=first;
    while (temp!=first)
    {
        temp=temp->link;
    }
    struct node * save=temp->link;
    temp->link=first;
    free(save);
    display();
}
void deletionfromspecifiedposition(int pos,int c){
    struct node *temp=first;
    if(pos<0 || pos>c){
        printf("Node At Your Give Position Not Available..");
        return;
    }
    else if(pos==0){
        deletefromfirst();
        return;
    }
    else if(pos==c){
        deletefromlast();
        return;
    }
    else{
        for ( int i = 1;i<pos; i++)
        {
           temp=temp->link;
        }
        struct node * save=temp->link;
        temp->link=save->link;
        free(save);
        display();
    }
}
void main(){
    int nodecount;
    printf("Enter Number Of Node You Have To Enter :- ");
    scanf("%d",&nodecount);
  
    printf("Enter Node Elements :-  \n");
    for(int i=0;i<nodecount;i++){
        int element;
        scanf("%d",&element);
        insertion(element);
    }
    printf("Your Linked list :- \n");
    // insertion(5);
    // insertion(6);
    // insertion(7);
    display();
    // printf("Linked List After Deletion At First :- \n");
    // deletefromfirst();
    // printf("Linked List After Deletion At Last :- \n");
    // deletefromlast();
    // printf("Enter Your Position To Delete :- ");
    // int x;
    // scanf("%d",&x);
    // printf("After Deletion from Specific Position :- \n");
    // deletionfromspecifiedposition(x,nodecount-1);
    printf("After Insertion At End :- \n");
    insertionatend(89);
    
}