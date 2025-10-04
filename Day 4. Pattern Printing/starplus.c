#include<stdio.h>
int main()
{
    int n;
    int a ;
    printf("enter a number: ");
    scanf("%d",&n);
    a=(n+1)/2;
    if(n%2!=0)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(i==a || j==a)
                {
                    printf(" * ");
                }
                else{printf("   ");}
               
            }
            printf("\n");
        }
    }
    else{printf("this pattern cannot be printed for even numbers");}
    return 0;
}
















// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter a number: ");
//     scanf("%d",&n);
//     if(n%2!=0)
//     {
//         for(int i=1;i<=n;i++)
//         {
//             for(int j=1;j<=n;j++)
//             {
//                 if(j==(n-1)/2)
//                 {
//                     printf(" ");
//                 } 
//                 else{printf("*");}
//                 if(j==(n+1)/2)
//                 {
//                     for(int k=1;k<=n;k++)
//                     printf("*");
//                 }
                
//             }
//             printf("\n");
//         }
//     }
//     else{printf("this pattern cannot be printed for even numbers");}
//     return 0;
// }
// this code is wrong but it was my try !!