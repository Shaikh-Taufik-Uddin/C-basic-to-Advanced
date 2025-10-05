#include<stdio.h>
int factorial(int a)
{
    int fact=1;
    for(int i=a;i>0;i--)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n ;
    printf("from how many to choose: ");
    scanf("%d",&n);
    int r ;
    printf("how many to choose at a time: ");
    scanf("%d",&r);
    int f=factorial(n);
    int g=factorial(r);
    int h=n-r;
    int i=factorial(h);
    int ans = f/(g*i);
    printf("you can choose %d out of %d in %d ways",r,n,ans);
    return 0;
}

// short code
/*
#include<stdio.h>
int factorial(int a)
{
    int fact=1;
    for(int i=a;i>0;i--)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n ;
    printf("from how many to choose: ");
    scanf("%d",&n);
    int r ;
    printf("how many to choose at a time: ");
    scanf("%d",&r);
    printf("Answer: %d",factorial(n)/(factorial(r)*factorial(n-r)));
    return 0;
}
*/