#include<stdio.h>
void main(){
    int a[5];
    int b[6];
    int c[11];
    int i;
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < 6; i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<5;i++){
        c[i]=a[i];
    }
    for(i=0;i<6;i++){
        c[5+i]=b[i];
    }
    for(i=0;i<11;i++){
        printf("%d",c[i]);
    }
}