#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *lptr;
    struct node *rptr;
};
struct node *first=NULL;

void insertion(int x){
    struct node * new;
    new=(struct node *)malloc(sizeof(struct node));
    new->info=x;
    new->lptr=NULL;
    
   if(first==NULL){
    new->rptr=NULL;
     first=new;
   }
   else{
     first->lptr=new;
     new->rptr=first;
     first=new;
   }
   
}
void display(){
    struct node * temp=first;
    while (temp!=NULL)
    {
        printf("%d\n",temp->info);
        temp=temp->rptr;
    }
}
void deletefromfirst(){
   struct node * temp=first;
    if (first==NULL)
    {
       printf("There IS No Node To Delete..");
       return;
    }
    if(first->rptr==NULL && first->lptr==NULL){
        temp=first;
        first=NULL;
        free(temp);
        return;
    }
    else{
       first=first->rptr;
       first->lptr=NULL;
       free(temp);
       return;
    }
    
}
void deletefromlast(){
   struct node * temp=first;
   if (first==NULL)
   {
    printf("There IS No Node To Delete..");
    return;
   }
  if(first->rptr==NULL && first->lptr==NULL){
        temp=first;
        first=NULL;
        free(temp);
        return;
    }
    else{
        while (temp->rptr->rptr!=NULL)
        {
            temp=temp->rptr;
        }
        struct node * save=temp->rptr;
        temp->rptr=NULL;
        free(save);
        return;
    }
}
void deletefromspecified(int pos){
    struct node *temp=first;
     if(pos<0 || pos>4){
            printf("Node Not Available..");
            return;
    }
  else if(pos==0){
        deletefromfirst();
          display();
        return;
      
    }
   else if(pos==4){
        deletefromlast();
        display();
        return;
    }
    else{
       
        for(int i=1;i<pos;i++){
            temp=temp->rptr;
        }
      
        struct node * save=temp->rptr;
        save->lptr=temp->lptr;
        temp->rptr=save->rptr;
        free(save);
        display();
        return;
    }
}
void insertionatend(int x){
    struct node *temp=first;
   struct node *newnode;
   newnode=(struct node  *)malloc(sizeof(struct node));
    if(first==NULL){
       insertion(x);
       display();
       return;
    }
    else{
        while (temp->rptr!=NULL)
        {
            temp=temp->rptr;
        }
        newnode->info=x;
        newnode->lptr=temp->lptr;
        temp->rptr=newnode;
        newnode->rptr=NULL;
        
       
    }
}
void main(){
    insertion(5);
    insertion(4);
    insertion(3);
    insertion(8);
    insertion(7);
    display();
    // deletefromfirst();
    // printf("After Deletion At First :- \n");
    // display();
    // deletefromlast();
    // printf("After Deletion From Last :- \n");
    // display();
    // printf("Which Position Node You Have To Delete index from 0 to 4 :- ");
    // int pos;
    // scanf("%d",&pos);
    // printf("After Deletion From %dst Position :- \n",pos);
    // deletefromspecified(pos);
    insertionatend(6);
    display();
    
}