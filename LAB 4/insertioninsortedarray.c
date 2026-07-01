#include<stdio.h>

int main()
{
    int n;

    printf("Enter size of array: ");
    scanf("%d",&n);

    int a[n+1];

    printf("Enter sorted array: ");
    int i;

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int x;
    printf("Enter element to insert: ");
    scanf("%d",&x);

    for(i=n-1; i>=0 && a[i]>=x; i--)
    {
        a[i+1]=a[i];
    }

    a[i+1]=x;

    printf("Array after insertion: ");

    for(i=0;i<n+1;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}