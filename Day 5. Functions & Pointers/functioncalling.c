#include<stdio.h>
void india ()
{
    printf("india\n"); // prints india 
    return; // returning nothing as return type is set to void 
}
void pakistan()
{
    printf("pakistan\n"); // prints pakistan
    india(); // calls india 
    return;
}
void bangladesh()
{
    printf("bangladesh\n"); // prints bangladesh
    pakistan(); // calls pakistan
    return;
}
int main()
{
    bangladesh();  // actually code starts from here 
    // after 3 functions are called like a thread and do their respective works the code exits 
    return 0;
}