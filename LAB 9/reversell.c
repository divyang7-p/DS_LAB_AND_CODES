#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node * link;
};
struct node * insertion (struct node * first,int x){
    struct node * new;
    new=(struct node *)malloc(sizeof(struct node));
    if (new==NULL)
    {
        printf("Memory Allocation Failed..!");
    }
    else{
        new->info=x;
        new->link=first;
        first=new;
    }
    return first;
}
struct node * reversell(struct node * first){
    struct node * temp=first;
    struct node * next=NULL;
    struct node * prev=NULL;
    while (temp!=NULL)
    {
       next=temp->link;
       temp->link=prev;
       prev=temp;
       temp=next;
    }
    first=prev;
    return first;
}
void display(struct node * first){
    struct node * temp=first;
    while (temp!=NULL)
    {
        printf("%d -> ",temp->info);
        temp=temp->link;
    }
    printf("NULL\n");
}
void main(){
    struct node * first = NULL;
    struct node * reverse=NULL;
    first=insertion(first,1);
    first=insertion(first,2);
    first=insertion(first,3);
    first=insertion(first,4);
    printf("Linked List :- \n");
    display(first);
    reverse=reversell(first);
    display(reverse);

}