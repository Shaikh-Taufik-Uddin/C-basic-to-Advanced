// unlike array initialization if we do pointer initialization of a string then we can modify entire string at once but not individual charecetrs at a time
#include<stdio.h>
#include<string.h>
int main()
{
    char *ptr = "hello world"; // string is initalized and defined 
    puts(ptr);
    ptr = "taufik"; // whole string changed 
    puts(ptr);
    return 0;
}