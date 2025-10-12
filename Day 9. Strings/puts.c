#include <stdio.h>
#include<string.h>
int main()
{
    char str[] = "hello world";
    printf("%s", str); // %s for printing string & we dont need str[] just str would do
    puts(str); // only this can print the whole string too !
    puts("this is working like printf()");
    return 0;
}
