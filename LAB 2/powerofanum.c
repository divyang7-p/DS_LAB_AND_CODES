#include<stdio.h>
void main(){
    int x;
    int y;
    printf ("Enter base and power respectively :- ");
    scanf("%d  %d",&x,&y);
    int i;
    int pow=1;
    for ( i = 1; i <= y; i++)
    {
        pow*=x;
    }
    printf(" power Is = %d",pow);
}