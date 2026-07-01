#include<stdio.h>
#include<stdlib.h>
struct node {
    int info;
    struct node *link;
};

void display(struct node *top)
{
    struct node *temp=top;
    while(temp!=NULL){
        printf("%d -> ",temp->info);
        temp=temp->link;
    }
    printf("NULL\n");
};

struct node *push(struct node *top,int x)
{
   struct node *newnode=(struct node *)malloc(sizeof(struct node));
   if(newnode==NULL){
    printf("Stack overflow");
   }
   else{
    newnode->info=x;
    newnode->link=top;
    top=newnode;
    return top;
   }
};
struct node *pop(struct node *top){
    struct node *pnode;
    if(top==NULL){
        printf("stack Underflow..");
    }
    else{
        pnode=top;
        printf("Deleted elemnet :- %d",pnode->info);
        top=top->link;
        free(top);
    }
    return top;
}
void dispdel(struct node *top){
    struct node *temp=top;
    while (temp!=NULL)
    {
        printf("%d -> ",temp->info);
        temp=temp->link;
    }
    printf("NULL\n");
}
void main(){
    struct node *top =NULL;
    top = push(top,78);
    top = push(top,8);
    top = push(top,7);
    printf("Stack Is :- \n");
    display(top);
    printf("Deleted Stack Is :- \n");
    dispdel(top);
}