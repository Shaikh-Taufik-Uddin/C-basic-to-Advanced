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
            printf("%d",j);
        }
        a=a+1;
        for(int l=1;l<=i-1;l++)
        {
            printf("%d",c);
            c--;
        }  
        printf("\n");
    }
}