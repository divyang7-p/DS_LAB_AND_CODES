#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
    char *str=(char *)(malloc(sizeof(char)*50));
    char *revstr=(char *)(malloc(sizeof(char)*50));
    scanf("%s",str);
    strcpy(revstr,str);
    strrev(revstr);
    if(strcmp(str,revstr)==0){
        printf("Palindrome..");
    }else{
        printf("Not Palindrom..");
    }
}