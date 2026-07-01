#include <stdio.h>
void main()
{
    printf("Enter size Of Array :- ");
    int s;
    scanf("%d", &s);
    int a[s];
    int i;
    printf("Enter Element Of Array :- ");
    for (i = 0; i < s; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter Index From Where You Have To delete Number :- ");
    int c;
    scanf("%d", &c);
    int x;
    for (i = c; i < s - 1; i++)
    {
        a[i] = a[i + 1];
    }

    for (i = 0; i < s - 1; i++)
    {
        printf("%d,", a[i]);
    }
}