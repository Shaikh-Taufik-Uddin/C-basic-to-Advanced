#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    // int a=1 (using extra variable)
    {
        for(int j=1;j<=n;j++)
        {
            //int d=a+64
            //char c =(char)d for typrcasting
            printf(" %c",j+64);  //a+64 (d)
            //a++
        }
        printf("\n");
    }
    return 0;
}