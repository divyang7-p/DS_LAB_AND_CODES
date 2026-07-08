#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *link;
};
struct node *insertion(struct node *first, int x)
{
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    if (new == NULL)
    {
        printf("Memory Allocation Failed!.");
    }
    new->info = x;
    new->link = first;
    first = new;
    return first;
}
struct node *reversell(struct node *first)
{
    struct node *newnode = NULL;
    struct node *reversed = NULL;
    struct node *temp = first;
    while (temp != NULL)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->info = temp->info;
        newnode->link = reversed;
        reversed = newnode;
        temp = temp->link;
    }
    return reversed;
}

void display(struct node *reversed)
{
    struct node *temp = reversed;
    while (temp != NULL)
    {
        printf("%d -> ", temp->info);
        temp = temp->link;
    }
    printf("NULL\n");
}
void main()
{
    struct node *first = NULL;

    first = insertion(first, 5);
    first = insertion(first, 4);
    first = insertion(first, 3);
    first = insertion(first, 2);
    struct node *reverse = reversell(first);
    printf("Linked List :- \n");
    display(first);
    printf("Reversed Linked List :- \n");
    display(reverse);
}