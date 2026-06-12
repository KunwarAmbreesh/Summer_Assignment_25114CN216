#include<stdio.h>

int main()
{
    int a[100], n, i, j, count;
    int max=0, ele;

    printf("Enter size: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        count=0;

        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
                count++;
        }

        if(count>max)
        {
            max=count;
            ele=a[i];
        }
    }

    printf("Maximum frequency element = %d",ele);

    return 0;
}