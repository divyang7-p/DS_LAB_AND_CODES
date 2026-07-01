#include<stdio.h>
void main(){
    int s;
    scanf("%d",&s);
    int a[s+1];
    int i;
    for(i=0;i<s;i++){
        scanf("%d",&a[i]);
    }
    int index;
    scanf("%d",&index);
    int x;
    scanf("%d",&x);
    for(i=s;i>index;i--){
        a[i]=a[i-1];
    }
    a[index]=x;
    for ( i = 0; i < s+1; i++)
    {
        printf("%d",a[i]);
    }
    
}