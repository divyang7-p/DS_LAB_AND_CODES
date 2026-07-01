#include<stdio.h>
void main(){
    int n;
    printf("Enter A Number :- ");
    scanf("%d",&n);
    int i;
    int sum=0;

    for(i=1;i<=n;i++){
        sum+=(i*(i+1))/2;
    }
    printf("%d",sum);
}