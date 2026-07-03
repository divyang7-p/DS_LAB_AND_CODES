#include<stdio.h>
#include<stdlib.h>
struct node {
    int info;
    struct node* link;
};
void main(){
  struct node *first=NULL;
  first=(struct node *)malloc(sizeof(struct node));
  printf("Enter A Intger Number :- ");
  scanf("%d",&first->info);
  first->link=NULL;
  printf("%d",first->info);
}
