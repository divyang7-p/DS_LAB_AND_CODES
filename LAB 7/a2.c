#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *link;
};
struct node *insert(int x, struct node *FIRST)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));

    if (new != NULL)
    {
        new->info = x;
        new->link = FIRST;
        FIRST = new;
        return FIRST;
    }
    else
    {
        printf("memory Allocation failed.");
    }
}
struct node *insertatend(int x, struct node *FIRST)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    struct node *save = FIRST;
    if (temp == NULL)
    {
        printf("Memory allocation failed");
    }
    else
    {
        temp->info = x;
        temp->link = NULL;
        if (FIRST == NULL)
        {
            FIRST = temp;
        }
        else
        {
            while ((save->link) != NULL)
            {
                save = save->link;
            }
            save->link = temp;
        }
        return FIRST;
    }
}
struct node *deletefirst(struct node *FIRST)
{
    if (FIRST == NULL)
    {
        printf("List IS Empty");
        return NULL;
    }

    else
    {
        struct node *temp = FIRST;
        FIRST = FIRST->link;
        free(temp);
        return FIRST;
    }
}
struct node *deletelast(struct node *FIRST){
    if (FIRST==NULL)
    {
        printf("List Is Empty");
        return NULL;
    }
    else if (FIRST->link == NULL)
    {
       free(FIRST);
       return NULL;
    }
    
    else{
        struct node *save=FIRST;
        while ((save->link->link)!=NULL)
        {
            save=save->link;
        }
        free(save->link);
        save->link=NULL;
        return FIRST;
    }
}
struct node *deletefromspecifiedposition(struct node *FIRST,int pos){
    struct node *temp,*prev;
    if (FIRST==NULL)
    {
        printf("List Is Empty");
        return NULL;
    }
    if (pos==1)
    {
        temp=FIRST;
        FIRST=FIRST->link;
        free(temp);
        return FIRST;
    }
    temp=FIRST;
    for (int i = 1; i < pos-1 && temp != NULL; i++)
    {
        temp=temp->link;
    }
    if (temp==NULL || temp->link==NULL)
    {
       printf("Invalid Position");
       return FIRST;
    }
    
    prev=temp->link;
    temp->link=prev->link;
    free(prev);
    return FIRST;
    
}

void display(struct node *FIRST)
{
    struct node *temp = FIRST;
    int c=0;
    while (temp != NULL)
    {
        printf("%d \n", temp->info);
        temp = temp->link;
        c=c+1;
    }
    printf("NULL\n");
    printf("Number Of Nodes :- %d\n",c);
}
void main()
{
    struct node *FIRST = NULL;
    FIRST = insert(5, FIRST);
    FIRST = insert(6, FIRST);
    FIRST = insert(7, FIRST);
    FIRST = insert(8, FIRST);
    FIRST = insertatend(9,FIRST);
    display(FIRST);
    FIRST= deletefromspecifiedposition(FIRST,2);
    // printf("Inserted Element Are :- \n");
    // display(FIRST);
    // printf("Deleted Node :- ");
    // int dn = FIRST->info;
    // FIRST = deletefirst(FIRST);
    // printf("%d", dn);
    // printf("After Deletion list :- \n");
    // display(FIRST);
    // printf("After Insertion At End:-\n");
    // display(FIRST);
    // printf("After Deletion At End :- \n");
    // display(FIRST);
    printf("After Deletion from pos 2 :- \n");
    display(FIRST);

}