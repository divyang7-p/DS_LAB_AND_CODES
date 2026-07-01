#include<stdio.h>
#include<stdlib.h>
struct node{
    int rno;
    char name[50];
    char bname[50];
    float spi;
};
void main(){
    struct node *p;
    
    printf("Enter info in Node :- \n");
    scanf("%d",&p->rno);
    scanf("%s",p->name);
    scanf("%s",p->bname);
    scanf("%f",&p->spi);
    printf("Info Are :- \n");
    printf("Roll No :- %d\n",p->rno);
    printf("Name :- %s\n",p->name);
    printf("Branch :- %s\n",p->bname);
    printf("SPI :- %.2f\n",p->spi);

}