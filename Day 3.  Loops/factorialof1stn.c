#include<stdio.h>
int main ()
{
    int n ;
    int i ;
    int f=1;
    printf("enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
        printf("\nthe factorial of %d is %d",i,f);
    }
    
    return 0;
}































// #include<stdio.h>
// int main()
// {
//     int n;
//     int f=1;
//     printf("enter the value of n:");
//     scanf("%d",n);
//     for(int i=1;i<=n;i++)
//     {
//       for(int a=1;a<=i;a++)
//       {
//         f=f*a ;
//         printf("\n%d",f);
//       }
//     //   printf("\n%d",f);
//     }

//     return 0;
// }