#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "hello";
    // insert an extra k after e
    for (int i = 4; i >= 2; i--)
    {
        s1[i + 1] = s1[i];
    }
    s1[2] = 'k';
    puts(s1);
    return 0;
}