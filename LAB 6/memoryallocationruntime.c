#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *i;
    char *c;
    float *f;
    i = (int *)(malloc(sizeof(int)));
    c = (char *)(malloc(sizeof(char)));
    f = (float *)(malloc(sizeof(float)));
    printf("Enter Integer Number :- ");
    scanf("%d", i);
    printf("Enter Character :- ");
    scanf(" %c", c);
    printf("Enter Floating Point Number :- ");
    scanf("%f", f);

    printf("%d %c %.2f", *i, *c, *f);
    free(i);
    free(c);
    free(f);
}