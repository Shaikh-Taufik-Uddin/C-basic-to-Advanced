// #include<stdio.h>
// void sum(int a, int b)
// {
//     if(a==0) 
//     {
//         printf("%d",b);
//         return;
//     }
//     sum(a-1,b+a);
//     return;
// }
// int main()
// {
//     int n;
//     printf("enter the value of n: ");
//     scanf("%d",&n);
//     sum(n,0);
//     return 0;
// }

#include<stdio.h>
int sum(int a)
{
    if(a==0) 
    {
        return 0;
    }
    int s= a+sum(a-1);
    return s;
}
int main()
{
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    int b=sum(n);
    printf("%d",b);
    return 0;
}