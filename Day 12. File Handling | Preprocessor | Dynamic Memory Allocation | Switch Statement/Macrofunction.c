#include <stdio.h>
#define pi 3.14159265359
#define area(r) (pi*r*r) // datatype not required area is function name r is argument and inside is the return 
int main()
{
    printf("%f", area(5.3));
    return 0;
}

/*#include<stdio.h>
#define pi 3.14159265359

//#define is used to define macros (not real functions).

float area (float r)
{
    return pi * r * r;
}
int main()
{
    printf("%f", area(5.3));
    return 0;
} */