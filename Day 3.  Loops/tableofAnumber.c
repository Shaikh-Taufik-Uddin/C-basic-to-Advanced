#include <stdio.h>
int main ()
{ int n ;
    printf("enter the number you want the table of : ");
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    {printf(" %d",n*i);}
    return 0 ;
}