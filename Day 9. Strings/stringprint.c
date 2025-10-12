#include <stdio.h>
int main()
{
    char arr[] = "hello world\0"; // another type of initialization that removes the tidious process of writing each charecter individually in ''
    int i = 0;
    while (arr[i] != '\0')
    {
        printf("%c", arr[i]);
        i++;
    }
    return 0;
}
/* interesting shyt
#include <stdio.h>
int main()
{
    char arr[] = "hello world"; // '\0' is not given in the original string
    // the compiler automates \0 after each string like this but not for like 'c' this types 
    // actual size of this string = seeming size + 1 (for \0 )
    // its good to write char str[] instead of char arr[] for better understanding
    while(arr[i]!='\0')
    {
        printf("%c", arr[i]);
        i++;
    }
    return 0;
}*/