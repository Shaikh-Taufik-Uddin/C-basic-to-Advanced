// copy one string to another creating a deep copy
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "hello world";
    puts(s1);
    int size = 0;
    int i = 0;
    while (s1[i] != '\0')
    {
        size++;
        i++;
    }
    printf("the size is %d\n", size);
    char s2[size];
    i = 0;
    int j = 0;
    while (s1[i] != '\0')
    {
        s2[j] = s1[i];
        i++;
        j++;
    }
    puts(s2);
    return 0;
}

// char s1[] = "hello world";
// char s2[] = "hello world";
// s1 and s2 are called to be deep copies