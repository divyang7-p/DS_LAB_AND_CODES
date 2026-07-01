#include<stdio.h>
void main(){
    int s;
    printf("Enter Size Of Array :- ");
    scanf("%d",&s);
    int a[s];
    printf("Enter element in sorted order :- ");
    for(int i=0;i<s;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter element to delete :- ");
    int x;
    int index=-1;
    scanf("%d",&x);
    for(int j=0;j<s;j++){
        if(a[j]==x){
            index=j;
            break;
        }
    }
    if(index==-1){
        printf("Element Not Found!..");
    }
    else{
        for(int k=index;k<s-1;k++){
       a[k]=a[k+1];
    }
    s--;
    for(int k=0;k<s;k++){
        printf("%d ",a[k]);
    }
    }

}