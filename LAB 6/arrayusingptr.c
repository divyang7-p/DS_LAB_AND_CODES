#include <stdio.h>
#include <stdlib.h>
void main()
{

    int *p;
    int i;
    p = (int *)(malloc(sizeof(int) * 5));
    if (p == NULL)
    {
        printf("Memory Allocation Failed..");
    }
    printf("Enter Element Of Array :- ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", (p + i));
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *(p + i));
    }
    free(p);
}