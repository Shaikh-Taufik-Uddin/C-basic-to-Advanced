#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("creat.txt", "w"); // w-> write mode & new file named creat.txt will be created if doesnt exist in the system already
    char str[1000];
    fgets(str, sizeof(str), stdin); // used for taking input string from the user
    fputs(str, ptr);                // fputs is used to copy string to a file (like strcpy() to copy from string to string)
    fclose(ptr);                    // closes the file
    return 0;
}