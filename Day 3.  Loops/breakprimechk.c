#include <stdio.h>
int main ()
{
    int a ;
    printf("enter a number : ");
    scanf("%d",&a);
    for(int i=2;i<a;i++) // not working for number 2 
    {
        if(a%i==0)
        {
        printf("the number is not prime");
        break;
        }
        else {printf("the number is prime");} // has problem with printing same line many times 

    }
    return 0 ;
    // best method is done in primecheck.c 
}