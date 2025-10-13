#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "hello world";
    puts(str);
    // str = "helo warld" // we cant change string as a whole after initilization
    // but its possible to change it 1 by 1
    str[0] = 'm';
    puts(str);
    return 0;
}