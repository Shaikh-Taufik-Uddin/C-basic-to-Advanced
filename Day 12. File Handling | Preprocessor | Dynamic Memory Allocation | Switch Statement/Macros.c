#include <stdio.h>
#define pi 3.14159265359 // pi will always be this value in any point of program (remember the syntax)
int main()
{
    double x;
    long double y;
    printf("\n%f", pi); // for float
    printf("\n%.4f", pi); // 4 decimal places
    printf("\n%lf", pi); // for double 
    printf("\n%Lf", pi); // for long double 
    //printf("%llf", pi); not valid everywhere 
    return 0;
}