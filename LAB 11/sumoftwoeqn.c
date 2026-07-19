#include <stdio.h>
#include <stdlib.h>
struct node
{
    int coff;
    int exp;
    struct node *link;
};
struct node *first = NULL;
struct node *second = NULL;
struct node *ans = NULL;
void insertionfirst(int coff, int exp)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    if (first == NULL)
    {
        newnode->coff = coff;
        newnode->exp = exp;
        newnode->link = NULL;
        first = newnode;
    }
    else
    {
        newnode->coff = coff;
        newnode->exp = exp;
        newnode->link = first;
        first = newnode;
    }
}
void insertionsecond(int coff, int exp)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    if (second== NULL)
    {
        newnode->coff = coff;
        newnode->exp = exp;
        newnode->link = NULL;
        second = newnode;
    }
    else
    {
        newnode->coff = coff;
        newnode->exp = exp;
        newnode->link = second;
        second = newnode;
    }
}
void display(struct node *x)
{
    struct node *temp = x;
    while (temp != NULL)
    {
        printf("%d,", temp->coff);
        printf("%d\n", temp->exp);
        temp = temp->link;
    }
}
void addtion()
{
    struct node * new;
    struct node *temp=first;
    struct node *temps=second;
    while (temp!=NULL && temps!=NULL)
    {
       if(temp->exp == temps->exp){
        new=(struct node *)malloc(sizeof(struct node));
      
    
            new->coff=temp->coff+temps->coff;
            new->exp=temp->exp;
            new->link=ans;
            ans=new;
        
        temp=temp->link;
       temps=temps->link;
       
       }
       else if(temp->exp<temps->exp){
        new=(struct node *)malloc(sizeof(struct node));
        new->coff=temp->coff;
        new->exp=temp->exp;
        new->link=ans;
        ans=new;
        temp=temp->link;
       }
       else{
        new=(struct node *)malloc(sizeof(struct node));
        new->coff=temps->coff;
        new->exp=temps->exp;
        new->link=ans;
        ans=new;
        temps=temps->link;
       }
       
    }
    while (temp!=NULL)
    {
        new=(struct node *)malloc(sizeof(struct node));
        new->coff=temp->coff;
        new->exp=temp->exp;
        new->link=ans;
        ans=new;
        temp=temp->link;
    }
    while(temps!=NULL){
        new=(struct node *)malloc(sizeof(struct node));
        new->coff=temps->coff;
        new->exp=temps->exp;
        new->link=ans;
        ans=new;
        temps=temps->link;
    }    
}
int main()
{
    insertionfirst(2, 3);
    insertionfirst(1, 2);
    insertionfirst(5, 0);
    insertionsecond(2, 3);
    insertionsecond(1, 2);
    insertionsecond(5, 1);
    insertionsecond(6,0);
    printf("First Eqn :- \n");
    display(first);
    printf("second eqn :- \n");
    display(second);
    printf("Sum Of Eqn :- \n");
    addtion();
    display(ans);
    return 0;
}
