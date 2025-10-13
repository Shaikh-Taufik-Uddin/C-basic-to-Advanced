#include <stdio.h>
#include <string.h>
int main()
// its a deep copy 
{
    char s1[] = "hello world";
    char s2[69];
    strcpy(s2,s1);
    puts(s2);
    return 0;
}