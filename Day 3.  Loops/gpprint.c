#include <stdio.h>
int main ()
{ 
    int n ;
    int i ;
    int a=1;
    printf("enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=a*2 ;
        printf("\n%d",a);
    }
    return 0;
}