#include<stdio.h>
int main()
{
    int a;
    int sum=0 ;
    int lastdigit ;
    printf("enter a number: ");
    scanf("%d",&a);
    while(a>0)
    {
       lastdigit=a%10;
       if(lastdigit%2==0)
       {sum=sum+lastdigit;}
       a=a/10;
        
    }
    printf("the sum of the number is %d",sum);
    return 0;
}