#include <stdio.h>
int main()
{
    FILE *ptr = fopen("filehand.txt", "r"); // file is opened in read mode // and ptr is pointing to the file
    char str[1000];
    while (fgets(str, 1000, ptr) != NULL) // used only to print 1 line
    {
        puts(str);
    }
    // if (fgets(str, 100, ptr) != NULL) // used only to print 1 line
    return 0;
}

/*
if will check the condition only once.
If fgets returns NULL, the block is skipped; if not, the block executes only once.
Typical use: read a single line.


while will keep looping as long as fgets does not return NULL.
fgets returns NULL when it reaches end-of-file (EOF) or encounters an error.
Typical use: reading a file line by line until the end.*/