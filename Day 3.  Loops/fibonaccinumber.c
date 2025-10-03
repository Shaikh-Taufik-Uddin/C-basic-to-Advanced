#include<stdio.h>
int main()
{
    int n ;
    int a=1;
    int b=1;
    int s=0;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(int i=1;i<=n-2;i++) // n-2 because the code will give nth term as n+2 th term because we defined a and b previously as 1 
    {
        s=a+b ;
        a=b;
        b=s;
        // printf("\n%d",s); // this is for printing the whole series 
    }
    printf("\n%d",s); // this is for printing only the nth digit of the series 
    return 0;

}