#include<stdio.h>
#include<stdlib.h>
struct student{
    int rno;
    char name[50];
    char branch[50];
    float spi;
};
void main(){
    struct student s1;
    struct student *ptr=&s1;
    scanf("%d",&ptr->rno);
    scanf("%s",ptr->name);
    scanf("%s",ptr->branch);
    scanf("%f",&ptr->spi);
    printf("%d\n",ptr->rno);
    printf("%s\n",ptr->name);
    printf("%s\n",ptr->branch);
    printf("%.2f\n",ptr->spi);   
}
