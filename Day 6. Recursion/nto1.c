#include<stdio.h>
// int printer(int a)
// {
//     printf("%d ",a);
//     if(a==1)
//     {
//         return 1;
//     }
//     return printer(a-1);
// }
void printer(int a)
{
    if(a==0)
    {
        return;
    }
    printf("%d ",a);
    printer(a-1);
    return;
}
int main()
{
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    printer(n);
    return 0;
}