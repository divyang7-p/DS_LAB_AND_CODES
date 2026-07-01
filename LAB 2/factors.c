#include<stdio.h>
void main(){
    int n;
    int i;
    printf("Enter A Number :- ");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        if(n%i==0){
            printf("%d,",i);
        }
    }
}