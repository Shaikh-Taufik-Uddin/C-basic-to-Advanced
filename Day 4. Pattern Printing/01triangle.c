#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    int a;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)a=1;
        else a=0;
        for(int j=1;j<=i;j++)
        {
            printf("%d",a);
            if(a==1)a=0;
            else a=1;
        }
        printf("\n");
    }
    return 0;
}
//********very important pattern for learning *********//