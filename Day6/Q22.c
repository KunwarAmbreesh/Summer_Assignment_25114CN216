#include<stdio.h>

int main()
{
    int n, r, d=0, b=1;

    printf("Enter binary number: ");
    scanf("%d",&n);

    while(n>0)
    {
        r=n%10;
        d=d+r*b;
        b=b*2;
        n=n/10;
    }

    printf("Decimal = %d",d);

    return 0;
}