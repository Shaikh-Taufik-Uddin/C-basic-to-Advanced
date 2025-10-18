#include <stdio.h>
#include <string.h>
int main()
{
    struct book
    {
        char name[69];
        int price;
        int pages;
    };
    struct book book1;
    strcpy(book1.name, "A Song of Ice and Fire");
    book1.price = 100;
    book1.pages = 365;
    printf("%s", book1.name);
    printf("\n%d", book1.price);
    printf("\n%d", book1.pages);
    return 0;
}