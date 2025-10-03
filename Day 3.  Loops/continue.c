#include <stdio.h>
int main ()
{
    int a ;
    printf("enter a number : ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        if(i%2==0)
        {
        // printf("\n%d",i);
        continue; // continue is used to skip a round/iteration of a loop
        }
        printf("\n%d",i);
    }
    return 0 ;
   
}