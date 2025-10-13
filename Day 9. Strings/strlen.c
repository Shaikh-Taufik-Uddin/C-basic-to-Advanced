#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "hello world";
    char *s2 = "taufik";
    int l = strlen(s1);
    int m = strlen(s2);
    printf("%d", l);
    printf("\n%d", m);
    return 0;
}