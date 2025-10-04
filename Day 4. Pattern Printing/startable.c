#include<stdio.h>
void main()
{
    int a ;
    printf("enter a number: ");
    scanf("%d",&a);
    int nst=a;
    int nsp=0;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=nst;j++)
        {
            printf("*");
        }
        for(int j=1;j<=nsp;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=nst;j++)
        {
            printf("*");
        }
        nsp+=2;
        nst--;
        printf("\n");
    }
}


// #include<stdio.h>
// void main()
// {
//     int a ;
//     printf("enter a number: ");
//     scanf("%d",&a);
//     int b=a;
//     int c=0;
//     int nst=a;
//     int nsp=0;
//     for(int i=1;i<=a;i++)
//     {
//         for(int j=1;j<=b;j++)
//         {
//             printf("*");
//         }
//         b--;
//         for(int j=1;j<=c;j++)
//         {
//             printf(" ");
//         }

//         for(int j=1;j<=nsp;j++)
//         {
//             printf(" ");
//         }
//         for(int j=1;j<=nst;j++)
//         {
//             printf("*");
//         }
//         nsp+=2;
//         nst--;
//         printf("\n");
//     }
// }