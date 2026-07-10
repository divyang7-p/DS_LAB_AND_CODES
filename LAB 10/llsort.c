#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *link;
};


struct node * insertion(struct node * first,int x){
    struct node * new;
    new=(struct node *)malloc(sizeof(struct node));
    if(new==NULL){
        printf("memory Allocation Failed!>.");
    }
    new->info=x;
    new->link=first;
    first=new;
    return first;
}
struct node * llsort(struct node * first){
    struct node * temp=first;
    struct node * i=NULL;
    struct node * j=NULL;
    for ( i = temp; i->link!=NULL; i=i->link)
    {
        for ( j = i->link; j!=NULL; j=j->link)
        {
            if (i->info >= j->info)
            {
                int temp=i->info;
                i->info=j->info;
                j->info=temp;
            }
            
        }
        
    }
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
    struct node * sorted=NULL;
    first=insertion(first,5);
    first=insertion(first,6);
    first=insertion(first,2);
    first=insertion(first,8);
    first=insertion(first,1);
    printf("Linked List :- \n");
    display(first);
    sorted=llsort(first);
    printf("Sorted Linked List :- \n");
    display(sorted);
    
}