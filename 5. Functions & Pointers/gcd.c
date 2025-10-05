#include<stdio.h>
int min(int a , int b)
{
    if(a>b)
    {
        return b;
    }
    else
    {
        return a ;
    }
}
int hcf(int a , int b)
{
    int c;
    for(int i=1;i<=min(a,b);i++)
    {
        if(a%i==0 && b%i==0)
        {
            c=i;
        }
    }
    return c;
}
int main()
{
    int a ;
    int b ;
    printf("enter a number: ");
    scanf("%d",&a);
    printf("enter a number: ");
    scanf("%d",&b);
    int c=hcf(a,b);
    printf("%d is the gcd of %d and %d",c,a,b);
    return 0;
}