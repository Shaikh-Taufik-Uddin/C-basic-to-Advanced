#include <stdio.h>
int main ()
{
    int i =100 ;
    // int i =100
    // while (i<100)
    // {
    //     printf("hello world") ;
    //     i++ ;
    // }
    // for this upper code nothing will be printed because i is already 100 
    do {
        printf("\nhello world"); // hello world will be printed once because it is do-while loop
        i++ ;
       
    }
    while (i<100);
    return 0;
    
}