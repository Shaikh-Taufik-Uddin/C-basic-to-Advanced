// this code wont run !! because it's pass by value !! inside swap() everything works fine but not reflected in the main() beneath
/*#include<stdio.h>
void swap(int a,int b) 
{
    a=a+b;
    b=a-b;
    a=a-b;
    return;
}
int main()
{
    int a;
    int b;
    printf("enter a: ");
    scanf("%d",&a);
    printf("enter b: ");
    scanf("%d",&b);
    swap(a,b);   // here a&b are formal parameters and e.g. 5&8 are actual parameters 
    printf("a=%d\n",a);
    printf("b=%d",b);
    return 0;
}*/

// where pass by value fails , pass by reference comes in !
/*pointers-> they store the actual adress of a variable in the system memory rather than the value inside it 
 for example int x=5 is declared , it will have some adress in system memory e.g. 5X204 so the pointer stores that value not 5   */

// more on pointer.c file 

// now trying to swap 2 no's using pass by reference functions

#include<stdio.h>
void swap(int* x , int* y ) //passed by reference 
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return;
}
int main()
{
    int a;
    int b;
    printf("enter a: ");
    scanf("%d",&a);
    printf("enter b: ");
    scanf("%d",&b);
    swap(&a,&b); // this is how to pass address to a function 
    printf("a=%d\n",a);
    printf("b=%d",b);
    return 0;
}