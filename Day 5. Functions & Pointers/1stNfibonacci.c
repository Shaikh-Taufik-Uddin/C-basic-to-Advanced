#include<stdio.h>
void fibonacci(int a)
{
    int c=0;
    int b=1;
    int s=0;
    for (int i=1;i<=a;i++)
    {
        s=c+b;
        c=b;
        b=s;
        printf("%d",s);
    }
    return;
}
int main()
{
    int a ;
    printf("enter a number: ");
    scanf("%d",&a);
    fibonacci(a);
    return 0;
}