#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=65;j<=90;j++)
        {
            printf(" %c",j);
        }
        printf("\n");
    }
    return 0;
}