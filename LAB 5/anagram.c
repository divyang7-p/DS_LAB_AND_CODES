#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>
#include<stdbool.h>
void main(){
    int n;
    printf("Enter Number Of words :- ");
    scanf("%d",&n);
    char words[n][50];
    int i;
    printf("Enter Words :-");
    for(i=0;i<n;i++){
       scanf("%s",words[i]);
    }
    srand(time(NULL));
    int random;
    random=rand()%n;
    char anagram[50];
    printf("Enter Your Word :- ");
    scanf("%s",anagram);
    int freq[26]={0};
    int freq2[26]={0};
    for(i=0;i<strlen(words[random]);i++){
        freq[words[random][i]-'a']++;
    }
    for ( i = 0; i <strlen(anagram); i++)
    {
        freq2[anagram[i]-'a']++;
    }
    bool isana=true;
    for ( i = 0; i < strlen(anagram); i++)
    {
        if(freq[i]!=freq2[i]){
            isana=false;
            break;  
        }
       
      
    }
    if(isana){
        printf("Anagram");
    }
    else
    {
        printf("Not Anagram");
    }
    
    
}