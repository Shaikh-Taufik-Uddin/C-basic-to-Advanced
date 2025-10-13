// charecter type pointers , when declared can store (a whole string actually) address of a string
#include <stdio.h>
#include <string.h>
int main()
{
    char *ptr = "hello world"; // this string has no name nothing but an address in the memory which is pointed by ptr (1st element/ whole strings address)
    // NOTE: such direct initializations using pointers results in a read only memory allocation of charecter arrays
    // and hence causes undefined behaviour if we try to change the charecters
    // e.g -> ptr[0]='m' (trying to enter m in the 0th index) gives error !
    printf("%s\n", ptr); // prints the string that is in ptr , no * needed to print whole string
    while (*ptr != '\0') // normal printing by modifying address
    {
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}
