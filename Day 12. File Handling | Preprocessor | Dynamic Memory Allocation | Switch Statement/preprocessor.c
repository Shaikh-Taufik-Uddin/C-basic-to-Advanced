#include<stdio.h> 
//#include is preprocessor directive where # is preprocessor
//stdio.h is header file (standard input output)
#include<limits.h>
int main()
{
    int x=INT_MAX;
    long y=LONG_MAX;
    long long z =LLONG_MAX;
    /*On Windows, both int and long are 4 bytes (32-bit), so their max values are equal.Only long long differs because it’s 8 bytes.*/
    printf("\n%d", x);
    printf("\n%ld", y);
    printf("\n%lld", z);
    return 0;
}