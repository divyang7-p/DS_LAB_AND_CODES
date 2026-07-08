#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *link;
};
struct node *insert(struct node *first, int x)
{
    struct node *new = first;
    new = (struct node *)malloc(sizeof(struct node));
    new->info = x;
    new->link = first;
    first = new;
    return first;
}
struct node *copyll(struct node *first)
{
    struct node *copied = NULL;
    struct node *copy = NULL;
    struct node *temp = first;

    while (temp != NULL)
    {
        copied = (struct node *)malloc(sizeof(struct node));
        struct node *temp1 = NULL;
        copied->info = temp->info;
        copied->link = NULL;
        if (copy == NULL)
        {
            copy = copied;
        }
        else
        {
            copied->link = copy;
            copy = copied;
            
        }

        

        temp = temp->link;
    }
    return copy;
}
void display(struct node *copied)
{
    struct node *temp = copied;
    while (temp != NULL)
    {
        printf("%d\n", temp->info);
        temp = temp->link;
    }
    printf("NULL\n");
}
void main()
{
    struct node *first = NULL;
   struct node *copy=NULL;
    printf("Enter 5 nodes :- \n");
    int x;
    for (int i = 1; i <= 5; i++)
    {
        scanf("%d", &x);
        first = insert(first, x);
    }
    
    printf("Linked List :- \n");
    display(first);
    printf("Copied Linked List :-\n");
    copy= copyll(first);
    display(copy);
}