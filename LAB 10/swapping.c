#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node * link;
};
struct node * insertion(struct node * first,int x){
    struct node * new=(struct node *)malloc(sizeof(struct node));
    if (new==NULL)
    {
        printf("Memory Allocation failed.!");
    }
    new->info=x;
    new->link=first;
    first=new;
    return first;
}
struct node * swap(struct node * first,int k){
    struct node * temp=first;
    struct node * ltemp=first;
    struct node * save=NULL;
    int i=0;
    for(i=1 ; i < k && temp!=NULL;i++){
        temp=temp->link;
    }
    for (i= 0; i < 5-k+1 && ltemp!=NULL; i++)
    {
        ltemp=ltemp->link;
    }
    if (temp==NULL || temp->link==NULL || ltemp==NULL || ltemp->link==NULL){
        printf("Position Cant be determined from  first as well as last.!");
    }
    int x=temp->info;
    temp->info=ltemp->info;
    ltemp->info=x;
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
    struct node * first=NULL;
    struct node * swapped=NULL;
    first=insertion(first,4);
    first=insertion(first,6);
    first=insertion(first,7);
    first=insertion(first,9);
    first=insertion(first,18);
    printf("Linked List :- \n");
    first=insertion(first,5);
    display(first);
    swapped=swap(first,2);
    printf("List After Swapping :- \n");
    display(swapped);
}