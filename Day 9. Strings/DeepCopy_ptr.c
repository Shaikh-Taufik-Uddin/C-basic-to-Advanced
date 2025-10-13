#include<stdio.h>
#include<string.h>
int main()
// using pointers we can make deep copies like this
{
    char *ptr1 = "Hello world";
    puts(ptr1);
    char *ptr2 = ptr1;
    puts(ptr2);
    return 0;
}