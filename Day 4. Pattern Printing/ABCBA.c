#include<stdio.h>
void main()
{
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    int a=1;
    int b=n;
    for(int i=1;i<=n;i++)
    {
        int c=i-1;
        for(int k=1;k<=b;k++)
        {
            printf(" ");
        }
        b--;
        for(int j=1;j<=a;j++)
        {
            printf("%c",j+64);
        }
        a=a+1;
        for(int l=1;l<=i-1;l++)
        {
            printf("%c",c+64);
            c--;
        }  
        printf("\n");
    }
}