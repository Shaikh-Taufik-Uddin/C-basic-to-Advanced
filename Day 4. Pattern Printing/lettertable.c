#include<stdio.h>
void main()
{
    int n ;
    printf("enter a number: ");
    scanf("%d",&n);

    for(int i=1;i<=2*n+1;i++) 
        {
            printf("%c",i+64);
        }
        printf("\n");

    int nst=n;
    int nsp=1;
    for(int i=2;i<=n;i++)
    {
        int a=1;
        for(int j=1;j<=nst;j++)
        {
            printf("%c",a+64);
            a++;
        }
        
        for(int j=1;j<=nsp;j++)
        {
            printf(" ");
            a++;
        }
        
        for(int j=1;j<=nst;j++)
        {
            printf("%c",a+64);
            a++;
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
}