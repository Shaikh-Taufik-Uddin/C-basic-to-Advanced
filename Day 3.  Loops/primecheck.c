#include <stdio.h>
int main ()
{
    int a ;
    int c;
    int count=0;
    
    printf("enter a number : ") ;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        c=a%i ;
        if(c==0)
        {
            count=count+1 ;
        }
    }
    if(count>2)
    {
        printf("the number %d is not prime",a);
    }
    else{printf("the number %d is prime",a);}
    return 0;

}

