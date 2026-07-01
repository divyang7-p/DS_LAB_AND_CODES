#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool armstr(int x)
{
    int c = 0;
    int temp = x;
    int original = x;
    int sum = 0;

    while (x != 0)
    {
        c++;
        x /= 10;
    }

    while (temp != 0)
    {
        int rem = temp % 10;
        sum += (int)pow(rem, c);
        temp /= 10;
    }

    return sum == original;
}

int main()
{
    int a, b;

    printf("Enter range: ");
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++)
    {
        if (armstr(i))
        {
            printf("%d ", i);
        }
    }

    return 0;
}