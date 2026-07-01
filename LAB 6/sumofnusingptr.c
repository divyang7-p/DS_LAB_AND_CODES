#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *np;
    np = (int *)(malloc(sizeof(int)));
    printf("Enter How Many Number You Have To Add :- ");
    scanf("%d", np);
    int i;
    int *p;
    p = (int *)(malloc(sizeof(int) * (*np)));
    printf("Enter Numbers :- ");
    for (i = 0; i < *np; i++)
    {
        scanf("%d", (p + i));
    }
    int sum = 0;
    for (i = 0; i < *np; i++)
    {
        sum += *(p + i);
    }
    printf("%d", sum);
}