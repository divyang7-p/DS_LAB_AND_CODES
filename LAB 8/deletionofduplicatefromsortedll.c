#include<stdio.h>
#include<stdlib.h>
struct node{
 int info;
 struct node *link;
};
struct node* insert(struct node*first,int x){
    struct node * new=(struct node*)malloc(sizeof(struct node));
    new->info=x;
    new->link=first;
    first=new;
    return first;
}
struct node * dupdeletioninsortedll(struct node*first){
    struct node *temp=first;
    
    if (first==NULL)
    {
       printf("linked list Is empty..");
       return NULL;
    }
    
    while (temp!=NULL && temp->link!=NULL)
    {
        if (temp->info == temp->link->info){
           struct node *prev=temp->link;
            temp->link=prev->link;
            free(prev);
        }
       temp=temp->link;
       
    }
               return first;

}
void display(struct node* first){
    struct node*temp=first;
    while (temp!=NULL)
    {
       printf("%d -> ",temp->info);
       temp=temp->link;
    }
    printf("NULL\n");
}
void main(){
    struct node *first=NULL;
    int n;
    printf("How many Nodes You have To Enter :- ");
    scanf("%d",&n);
    int x;
    printf("Enter sorted nodes :- ");
    for ( int i = 1; i <=n; i++)
    {
        scanf("%d",&x);
        first=insert(first,x);
    }
    first=dupdeletioninsortedll(first);
    display(first);
}
