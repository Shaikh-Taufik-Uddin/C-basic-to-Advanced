#include<stdio.h>
int main ()
{
    int a ;
    printf("enter a number: ");
    scanf("%d",&a);
    if((a%5==0 || a%3==0 ) && a%15!=0)
    
        
        {printf("this number is divisible by 5 or 3 but not  divisible by 15 ");}

        else{printf("the number does not meet the condition");}
    
        return 0;
}
  