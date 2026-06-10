#include<stdio.h>

int main()
{
    int a[10], n, i;
    int max, second;

    printf("Enter size: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    max = a[0];
    second = a[0];

    for(i=1;i<n;i++)
    {
        if(a[i] > max)
        {
            second = max;
            max = a[i];
        }
    }

    printf("Second Largest = %d",second);

    return 0;
}