#include<stdio.h>
int main()
{
    int n;
    printf("enter the value : ");
    scanf("%d",&n);
    int a=n;
    int s=1;
    int b=n;
    int ml=2*n+2;
    for (int i = 1; i <=ml/2; i++) {
        printf("%d", i);
    }
    for(int i=n;i>0;i--)
    {
        printf("%d",i);
    }
    printf("\n");
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=a;j++)
            {
                printf("%d",j);
            }
            a--;
            for(int j=1;j<=s;j++)
            {
                printf("_");
            }
            s+=2;
            for(int k=b;k>0;k--)
            {
                printf("%d",k); 
            }    
            b--;
            
            printf("\n");
        }
}

