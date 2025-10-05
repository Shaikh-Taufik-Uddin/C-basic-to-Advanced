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
int ncr(int n,int r)
{
    int ans=factorial(n)/(factorial(r)*factorial(n-r));
    return ans ;
}
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        int a=n-i;
        for(int j=a;j>0;j--)
        {
            printf(" ");
        }
        a--;
        for(int j=0;j<=i;j++)
        {
            printf("%d ",ncr(i,j));
        }
        printf("\n");
    }
    return 0;
}

// better method (but maths heavy) 
// below part is only for the actual triangle not the spaces too !

// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter n : ");
//     scanf("%d", &n);

//     for (int i = 0; i <= n; i++) {
//         int first = 1;
//         printf("%d ", first);

//         for (int j = 0; j <= i; j++) {
//             printf("%d ", first);
//             first = first * (i - j) / (j + 1);
//         }
//         printf("\n");
//     }

//     return 0;
// }

