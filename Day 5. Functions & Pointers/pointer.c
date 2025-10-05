// declairing pointers 

#include<stdio.h>
int  main()
{
    int a=5;

    // pointer declaration

     int* x=&a; // int* x; x=&a; is also same thing !

    printf("%d",a); // this prints the value of a as usual 
    
    printf("\n%p",x); // this prints the address of a 

    printf("\n%p",&a); //this prints the address of a too !!

    printf("\n%d",*x); // whoa! this thing takes the address that is stored in x , points to that address and prints the actual value stored in that pointed address !!

    *x=7; // changes the pointed address's value from 5 to 7 

    printf("\n%d",a); // now a is 7 so 7 is printed

    int**y=&x; // int** is (double pointer) a datatype to store the address of a pointer (more like pointer of a pointer)

    printf("\n%p",y); // address of x is printed

    printf("\n%d",**y);// now 1st this gets *y that is ultimately the value stored in x which is the address of a , then it goes * of it again that leads to the value stored in a which is 7
   
    return 0;
}
// so like this *** & **** ans so on are also possible