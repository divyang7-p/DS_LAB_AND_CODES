#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node * link;
};
int gcd(int a,int b){
    int gcd;
    int min;
    if (a>b)
    {
        min=a;
    }
    else{
       min=a;
    }
    for ( int i = min; i>=1; i--)
    {
        if (a%i==0 && b%i==0)
        {
            return i;
        }
        
    }
    return 1;
}
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
struct node * addingcd(struct node * first){
    struct node * temp=first;
    struct node * new;
    
    while (temp->link!=NULL)
    {
        new=(struct node *)malloc(sizeof(struct node));
        int g=gcd(temp->info,temp->link->info);
        new->info=g;
        new->link=temp->link;
        temp->link=new;
        
       
        temp=temp->link->link;
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
   
   struct node * gcdadded=NULL;
    
    first=insertion(first,4);
    first=insertion(first,6);
    first=insertion(first,7);
    first=insertion(first,9);
    first=insertion(first,18);
    first=insertion(first,5);
    printf("Linked List :- \n");
    display(first);
    gcdadded=addingcd(first);
    display(gcdadded);

}