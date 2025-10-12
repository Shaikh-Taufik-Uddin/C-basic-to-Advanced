#include <stdio.h>
#include <string.h>
int main()
{
    char str[40];
    // scanf("%s", str); // we dont give & for inputting in string for their default pass by ref. charecter
    scanf("%[^\n]", str); // special shyt to print a string
    // gets()
    // gets(str);
    printf("your input was '%s' ", str);
    return 0;
}