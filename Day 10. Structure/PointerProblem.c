// #include <stdio.h>
// int main()
// {
//     int *x, *y;
//     int a = 7, b = 9;
//     printf("%p", x);
//     printf("\n%p", y);
//     return 0;
// }

#include <stdio.h>
typedef int *ptr;
int main()
{
    ptr x, y;
    printf("%p", x);
    printf("\n%p", y);
    return 0;
}