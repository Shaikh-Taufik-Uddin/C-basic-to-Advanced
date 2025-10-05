#include<stdio.h>
int sum(int a,int b) // a,b are called arguments or parameters
{
    return a+b; // addition result is returned while exiting 
} 
// as int was the return type of int sum() so return can be stored in a int type 
// if it was written void sum() an error would be generated cuz void has a null return type while a+b has int return type
int main()
{
    int a,b; // this a,b is NOT the same as a,b in the upper function e.g int sum(int x,int y) with return x+y would do the same thing 
    printf("enter a number: ");
    scanf("%d",&a);
    printf("enter a number: ");
    scanf("%d",&b);
    int c=sum(a,b); // passing the values of a & b in the upper function
    printf("%d",c);
    return 0;
}