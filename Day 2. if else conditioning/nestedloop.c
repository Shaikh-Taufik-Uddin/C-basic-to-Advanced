#include <stdio.h>
int main()
{ int n ;
    printf("enter a number: ");
    scanf("%d",&n);
    if(n%5==0)
    {
        if(n%3==0)
    {
        printf("the number is divisible by both 3 and 5");}
        else{printf("the number is not divisible by both 3 and 5");}
    }

else{printf("the number is not divisible by both 3 and 5");}


    return 0 ;
}