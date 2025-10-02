#include <stdio.h>
int main ()
{
    int number ;
    printf ("enter the number ");
    scanf("%d",&number);
    if(number<0)
{number=number*(-1);
    printf("number is %d",number);}
else {printf("number is %d ",number);}
    return 0 ;
}