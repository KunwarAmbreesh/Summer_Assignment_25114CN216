#include<stdio.h>

int main()
{
    int a[10], n, i, x;

    printf("Enter size: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter element to search: ");
    scanf("%d",&x);

    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            printf("Found");
            return 0;
        }
    }

    printf("Not Found");

    return 0;
}