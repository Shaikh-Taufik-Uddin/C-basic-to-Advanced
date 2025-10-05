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
    printf("how many to choose at a time in a order : ");
    scanf("%d",&r);
    printf("Answer: %d",factorial(n)/factorial(n-r));
    return 0;
}