#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "qwertyuiopasdfghjklzxcvbnm";
    char *ptr = str; // stores address of str in ptr (address of the 1st element precisely)
    printf("%p", ptr);
    printf("\n%p", str); // we dont need to give & before str to print its address
    while (*ptr != 0)
    {
        printf("%c", *ptr);
        ptr++; // it is happening bcz the address of the other elements in the string is adjacent to the previous element in the memory
        // so when ptr goes to nest location it finds the next letter
    }
    return 0;
}