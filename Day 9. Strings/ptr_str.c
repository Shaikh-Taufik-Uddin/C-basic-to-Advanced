#include <stdio.h>
#include <string.h>
int main()
{
    char *ptr = "c is best"; // normal defining and printing
    puts(ptr);
    char str[] = "hello world"; // normal defining and printing
    puts(str);
    ptr = str;           // ptr is moved to str
    puts(ptr);           // str gets printed
    *ptr = 'p';          // 'h' is modified with 'p'  (ptr='p' wont do nothin without the *)
    puts(str);           // modified str is printed
    ptr = "c++ is next"; // new string in ptr
    puts(str);           // modified str gets printed
    puts(ptr);           // new ptr is printed ( actually the pointer moves from str and points towards a new string)
    return 0;
}
