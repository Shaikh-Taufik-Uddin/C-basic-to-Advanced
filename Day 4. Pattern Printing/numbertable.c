#include<stdio.h>
void main()
{
    int n ;
    printf("enter a number: ");
    scanf("%d",&n);

    for(int i=1;i<=2*n+1;i++) // eg. for n=5 ; 1st line should be printed till 11
        {
            printf("%d",i);
        }
        printf("\n");

    int nst=n;
    int nsp=1;
    for(int i=2;i<=n;i++)
    {
        int a=1;
        for(int j=1;j<=nst;j++)
        {
            printf("%d",a);
            a++;
        }
        
        for(int j=1;j<=nsp;j++)
        {
            printf(" ");
            a++;
        }
        
        for(int j=1;j<=nst;j++)
        {
            printf("%d",a);
            a++;
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
}

