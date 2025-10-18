/*#include<stdio.h>
typedef float realnumber; // typedef converts any data type to a userdefined nickname typedef oldname newname
int main()
{
    realnumber y=6.99;
    printf("%f", y);
    return 0;
}*/

#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct book
    {
        char name[69];
        int price;
        int pages;
    } b; // b will be the nickname instead of struct book
    b book1;
    b book2;
    b book3;
    

    return 0;
}