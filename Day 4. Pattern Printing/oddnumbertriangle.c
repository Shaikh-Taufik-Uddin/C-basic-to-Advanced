#include<stdio.h>
int main()
{
    int n ;
    printf("enter the value of n ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
         if(i%2!=0)
        {
        for(int j=1;j<=i;j++)
        {
            if(j%2!=0)
           {printf("%d",j);}
        }
        printf("\n");}
    }
    return 0;
}