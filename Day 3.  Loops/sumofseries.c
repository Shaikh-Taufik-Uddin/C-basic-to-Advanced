#include<stdio.h>
int main()
{
    int n ;
    int a=0 ;
    int s=0;
    int i;
    int sum ;
    printf("enter value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
           s=s+i*(-1);

        }
        if(i%2!=0)
        {
            a=a+i;
        }
    }
       sum=a+s ;
       printf("the sum of the series is %d",sum);
       
    return 0 ;
    
}