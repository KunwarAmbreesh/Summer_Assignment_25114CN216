#include<stdio.h>

int main()
{
    int a[10], n, i, x, count=0;

    printf("Enter size: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter element: ");
    scanf("%d",&x);

    for(i=0;i<n;i++)
    {
        if(a[i]==x)
            count++;
    }

    printf("Frequency = %d",count);

    return 0;
}