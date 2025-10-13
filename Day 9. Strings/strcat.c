// cat means concatinate .. means merging
#include <stdio.h>
#include <string.h>
int main()
// cant concatinate * type string though 
{
    char s1[] = "hello"; 
    char s2[] = " world";
    strcat(s1, s2); // s1= s1+s2 basically 
    puts(s1);
    return 0;
}