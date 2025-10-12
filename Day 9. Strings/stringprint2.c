// other ways of printing particular element
#include <stdio.h>
int main()
{
    char arr[] = "hello world\0";
    int i = 0;
    while (arr[i] != '\0')
    {
        printf("%c", arr[i]);     // standard way to write
        printf("%c", i[arr]);     // arr[i] and i[arr] are same
        printf("%c", *(arr + i)); // prints the same
        printf("%c", *(i + arr)); // prints the same
        i++;
    }
    return 0;
}