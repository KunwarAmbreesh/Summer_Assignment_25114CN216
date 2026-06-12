#include<stdio.h>

int main()
{
    int a[100], n, i, j;

    printf("Enter size: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Array without duplicates:\n");

    for(i=0;i<n;i++)
    {
        int dup=0;

        for(j=0;j<i;j++)
        {
            if(a[i]==a[j])
                dup=1;
        }

        if(dup==0)
            printf("%d ",a[i]);
    }

    return 0;
}