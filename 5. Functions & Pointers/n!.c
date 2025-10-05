#include<stdio.h>
int factorial(int a)
{
    int b=1;
    for(int i=1;i<=a;i++)
    {
        b=b*i;
    }
    return b;
}
int main()
{
    int a;
    printf("enter a number: ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        int b=factorial(i);
        printf("%d ",b);
    }
    return 0;
}