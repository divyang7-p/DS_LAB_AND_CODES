#include <stdio.h>
void main()
{
    int n;
    int rem;
    int reverese = 0;
    printf("Enter A number :- ");
    scanf("%d", &n);
    while (n != 0)
    {
        rem = n % 10;
        reverese=rem+reverese*10;
        n=n/10;
    }
    printf("Reverse Of Your Number Is :- %d",reverese);
}