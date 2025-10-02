#include<stdio.h>
int main ()
{
    int a ;
    printf("enter a number: ");
    scanf("%d",&a);
    if(a%5==0 || a%3==0)
    {
        if(a%15==0)
        {printf("this number is divisible by 5 or 3 and also divisible by 15 ");}
        else{printf("this number is divisible by 5 or 3 but not by 15");}
    }
    else{printf("this number is not divisible by 5 or 3 and hence not by 15 too! ");}

    return 0;
}