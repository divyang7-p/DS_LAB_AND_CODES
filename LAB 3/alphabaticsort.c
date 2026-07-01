#include <stdio.h>
#include <string.h>
void main()
{
    char a[5][20];
    int i;
    int j;
    char temp[20];
    printf("Enter Strings :- ");
    for (i = 0; i < 5; i++)
    {
        scanf("%19s", a[i]);
    }
    for (i = 0; i < 4; i++)
    {
        
        for (j = i + 1; j < 5; j++)
        {
            if(strcmp(a[i],a[j])>0){
                strcpy(temp,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],temp);
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
       
            printf("%s\n", a[i]);
        
    }
}