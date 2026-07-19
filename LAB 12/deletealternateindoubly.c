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
void specificpositiondeletion(int pos){
       struct node *temp=first;
       
        for(int i=1;i<pos;i++){
            temp=temp->rptr;
        }
      
        struct node * save=temp->rptr;
        save->lptr=temp->lptr;
        temp->rptr=save->rptr;
        free(save);
        return;
 
}
void deletionofalternate(){
    struct node * temp=first;
    if(first==NULL){
        printf("No Node Available..");
        return;
    }
    if(first->rptr==NULL && first->lptr==NULL)
    {
        printf("It Has Only One Node At 0th Index So Alternate Deletion Not possible..");
        return;
    }
    else{
        for ( int i = 0; i < 5; i++)
        {
            if (i%2!=0)
            {
               specificpositiondeletion(i);
            }
            
        }
        return;
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
void main(){
    insertion(5);
    insertion(4);
    insertion(3);
    insertion(8);
    insertion(7);
    display();
    printf("After Odd position alternate Deletion :- \n");
    deletionofalternate();
    display();
}