#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
};
struct node* push(struct node*top,int x){
    struct node  *new;
    new = (struct node*)malloc(sizeof(struct node));
    if(new==NULL){
        printf("Memory Allocation Failed");
        return NULL;
    }
    else{
        new->info=x;
        new->link=top;
        top=new;
        return top;
    }
}
int peek(struct node *top){
    return top->info;
}
int peep(struct node*top,int pos){
    struct node*temp=top;
    struct node*prev=top;
    
    if(top==NULL){
        printf("Stack Underflow");
        return 0;
    }
    if(pos==1)
    {
        return top->info;

    }
    int i;
    for(i=1;i<pos-1 && temp!=NULL;i++){
    
        temp=temp->link;
    }
    if (temp==NULL || temp->link==NULL)
    {
        printf("Invalid position");
       
    }
        prev=temp->link;
    return prev->info;
}
struct node * change_At_Given_Position(struct node *top,int pos,int x){
    struct node *temp=top;
    struct node *prev=top;
    if(top==NULL){
        printf("Stack UnderFlow");
        return NULL;
    }
    if(pos==1){
        top->info=x;
        return top;
    }
    for ( int i = 1; i < pos-1 && temp!=NULL; i++)
    {
       temp=temp->link;
    }
    prev=temp->link;
    prev->info=x;
    return top;
}
struct node*pop(struct node*top){
    struct node*temp=top;
   
    
    if(top==NULL){
        printf("Stack UnderFlow");
    }
    else{
       while (top!=NULL)
       {
         top=top->link;
        free(temp);
        
       }
       return NULL;
    }
}
// struct node * delete_first_element_in_stack(struct node*top){
//     struct node *temp;
//     if (top<0)
//     {
//         printf("Stack UnderFlow");
//         return NULL;
//     }
//     else{
//         temp=top;
//         top=top->link;
//         free(temp);
//         return top;
//     }  
// }
// struct node * delete_Last_Element_In_Stack(struct node*top){
//   struct node*temp;
//   temp=top;
//   if (top==NULL)
//   {
//     printf("Stack UnderFlow");
//     return NULL;
//   }
//   else if (top->info==NULL)
//   {
//     free(top);
//     return NULL;
//   }
//   else{
//     while (temp->link->link!=NULL)
//     {
//         temp=temp->link;
//     }
//     free(temp->link);
//     temp->link=NULL;
//     return top;
//   }  
// }

void display(struct node* top){
   struct node*temp=top;
   while (temp!=NULL)
   {
    printf("%d -> ",temp->info);
    temp=temp->link;
   }
   printf("NULL\n");
    
}
void main(){
    struct node *top=NULL;
    top = push(top,5);
    top = push(top,6);
    top = push(top,7);
    top = push(top,8);
    printf("Stack After Pushing Elements :- ");
    display(top);
    printf("Stack's Peek Element :- ");
    int x=peek(top);
    printf("%d\n",x);
    printf("Stack's 4th Element :- ");
    int y=peep(top,4);
    printf("%d\n",y);
    printf("Satck After Changing Its 2nd Element :- ");
    top=change_At_Given_Position(top,2,9);
    display(top);
     printf("Satck After popping:- ");
    top=pop(top);
    display(top);
    // top=delete_first_element_in_stack(top);
    // display(top);
    // printf("Stack After Deleting Last Element :- ");
    // top = delete_Last_Element_In_Stack(top);
    // display(top);
}
