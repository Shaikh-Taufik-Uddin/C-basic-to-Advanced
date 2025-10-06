#include<stdio.h>
// using extra parameter b ;

// int printer(int b,int a)
// {
//     printf("%d ",b);
//     if(b==a)
//     {
//         return a;
//     }
//     return printer(b+1,a);
// }
void printer(int b,int a)
{
    if(b>a)
    {
        return;
    }
    printf("%d ",b);
    printer(b+1,a);
    return;
}
int main()
{
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    printer(1,n);
    return 0;
}