#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct node{
    int info;
    struct node* link;
};
struct node*push(struct node*top,int x){
    struct node *new;
    new=(struct node*)malloc(sizeof(struct node));
    if (new==NULL)
    {
        printf("Memory Allocation Failed..");
        return NULL;
    }
    else{
        new->info=x;
        new->link=top;
        top=new;
        return top;
    }
}
void compare(struct node* top1,struct node *top2){
    bool isllsame=true;
    if((top1==NULL && top2==NULL)){
        isllsame=true;
    }
    else if (top1==NULL || top2==NULL)
    {
       isllsame=false;
    }
    else{
        while (top1 != NULL && top2!= NULL)
        {
            if (top1->info != top2->info)
            {
                isllsame=false;
                
                break;
            }
            top1=top1->link;
            top2=top2->link;
            
        }
        
    }
    if (isllsame)
    {
        printf("Linked List Are Same");
    }
    else{
        printf("Linked List Are Not Same");
    }
}
void main(){
    struct node*top1=NULL;
    top1=push(top1,5);
    top1=push(top1,4);
    top1=push(top1,6);
    top1=push(top1,7);
    struct node*top2=NULL;
    top2=push(top2,5);
    top2=push(top2,4);
    top2=push(top2,6);
    top2=push(top2,7);
    compare(top1,top2);
    
}