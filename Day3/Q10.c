#include<stdio.h>

int main()
{
    int a,b,i,j,f;

    printf("Enter range: ");
    scanf("%d%d",&a,&b);

    for(i=a;i<=b;i++)
    {
        f=0;

        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                f=1;
            }
        }

        if(f==0 && i!=1)
        {
            printf("%d ",i);
        }
    }

    return 0;
}