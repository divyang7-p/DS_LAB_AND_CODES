#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
    char info;
    struct node *link;
};
struct node *top = NULL;
void push(char x)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    struct node *temp = top;
    newnode->info = x;
    newnode->link = NULL;
    if (top == NULL)
    {
        top = newnode;
    }
    else
    {

        while (temp->link != NULL)
        {
            temp = temp->link;
        }
        temp->link = newnode;
    }
}
void pop()
{
    struct node *temp = top;
    top = top->link;
    free(temp);
}
void specific_pos_deletion(int pos)
{
    struct node *temp = top;
    if (pos == 0)
    {
        top = top->link;
        free(temp);
    }
    else
    {
        for (int i = 1; i < pos; i++)
        {
            temp = temp->link;
        }
        struct node *target = temp->link;
        temp->link = target->link;
        free(target);
    }
}
void stardeletion(char str[])
{
    struct node *temp = top;
    int del=0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == '*')
        {
            specific_pos_deletion(i-del);
            del++;
        }
    }
}
void display()
{
    struct node *temp = top;
    while (temp != NULL)
    {
        printf("%c", temp->info);
        temp = temp->link;
    }
    printf("\n");
}
void main()
{
    char str[100];
    printf("Enter String :- ");
    scanf("%s", str);
    int i = 0;
    while (str[i] != '\0')
    {
        push(str[i]);
        i++;
    }
    printf("Original String :- \n");
    display();
    printf("String After Removal Of star :- \n");
    stardeletion(str);
    display();
}
