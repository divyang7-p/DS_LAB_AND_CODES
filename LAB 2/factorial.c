#include<stdio.h>
int facto(int n);
void main(){
    int n;
    printf("Enter Number To Find Factorial :- ");
    scanf("%d",&n);
    int a=facto(n);
    printf("FActorial Of A given Number :- %d",a);
}
int facto(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*facto(n-1);
    }
}