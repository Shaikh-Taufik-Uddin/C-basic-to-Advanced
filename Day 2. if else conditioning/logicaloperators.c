#include <stdio.h>
int main ()
{ int n ;
    printf("enter a number ") ;
    scanf("%d",&n);
 if(n>800 && n<1000)
 {printf("the number %d is between 800 and 1000",n) ;}
 else {printf("this number is not between 800 and 1000");}
    return 0;
}