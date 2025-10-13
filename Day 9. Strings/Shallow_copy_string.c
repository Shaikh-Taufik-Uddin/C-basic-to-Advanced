// copy one string to another one
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "hello world";
    puts(s1);
    char *s2 = s1; // s2 pointed towards s1 string
    s1[0] = 'p';   // 0th index changed to p
    puts(s1);      // the change will be reflected because the dynamic nature of these operators
    return 0;
}

// shallow copy : here an s2 points to the same charecter array and hence changes in s1 is also reflected in s2
