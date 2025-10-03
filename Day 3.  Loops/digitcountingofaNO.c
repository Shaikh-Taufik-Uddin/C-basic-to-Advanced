#include <stdio.h>
int main ()
{
    int n ;
    int cnt=0 ;
    printf ("enter a number: ");
    scanf("%d",&n);
    while(n>0)
    {
        n=n/10;
        cnt++;

    }
    printf("%d digits are in that number",cnt);

    return 0 ;

}