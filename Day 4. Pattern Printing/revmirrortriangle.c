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
        for(int j=1;j<=nsp;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=nst;j++)
        {
            printf("*");
        }
        nsp++;
        nst--;
        printf("\n");
    }
}