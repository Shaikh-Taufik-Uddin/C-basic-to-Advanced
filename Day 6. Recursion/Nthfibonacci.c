#include<stdio.h>
int fibonacci(int n)
{
    if(n==1 || n==2)
    {
        return 1;
    }
    int f =fibonacci(n-1)+fibonacci(n-2); // this is called multiple calling , a function can be called many times inside itself if needed 
    return f;
}
int main()
{
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    int f = fibonacci(n);
    printf("%d",f);
    return 0;
}
