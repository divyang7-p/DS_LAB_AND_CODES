#include<stdio.h>
void main(){
    char c;
    printf("Enter A Character :- ");
    scanf("%c",&c);
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
        printf("Entered Character Is Vowel..");
    }
    else{
        printf("Entered Character Is Consonant..");
    }
}