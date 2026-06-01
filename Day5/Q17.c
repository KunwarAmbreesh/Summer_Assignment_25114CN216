#include<stdio.h>

int main()
{
    int n,sum=0,i;

    printf("Enter number: ");
    scanf("%d",&n);

    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }

    if(sum==n)
    {
        printf("Perfect number");
    }
    else
    {
        printf("Not perfect number");
    }

    return 0;
}