#include<stdio.h>

int main()
{
    int n,i,j,c,largest=0;

    printf("Enter number: ");
    scanf("%d",&n);

    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            c=0;

            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    c++;
                }
            }

            if(c==2)
            {
                largest=i;
            }
        }
    }

    printf("Largest prime factor = %d",largest);

    return 0;
}