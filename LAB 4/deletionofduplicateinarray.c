#include<stdio.h>
void main(){
    int s;
    scanf("%d",&s);
    int a[s];
    printf("Enter element of array :- ");
    int i;
    for ( i = 0; i<s; i++)
    {
        scanf("%d",&a[i]);
    }
    int j;
    int k;
    for ( i = 0; i < s-1; i++)
    {
        for ( j = i+1; j <= s-1;)
        {
            if(a[i]==a[j]){
                for ( k = j; k < s-1; k++)
                {
                    a[k]=a[k+1];
                }
                s--;
            }
            
            else{
                j++;
            }
        }
        
    }
    for(i=0;i<s;i++){
        printf("%d",a[i]);
    }
}