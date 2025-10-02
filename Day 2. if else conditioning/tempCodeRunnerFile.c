#include <stdio.h>
int main ()
{
    int a ;
    int b ;
    int c ;
    printf("give three numbers: ") ;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>b && a>c)
    {printf("%d is the greatest number"),a;}
    if(b>a && b>c)
    {printf("%d is the greatest number"),b;}
    if(c>a && c>b)
    {printf("%d is the greatest number"),c;}

    return 0;
}