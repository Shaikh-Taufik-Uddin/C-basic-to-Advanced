 /*#include<stdio.h>
void func()
{
    printf("hello");
    return;
}
int main ()
{
    func();
    return 0;
}*/


/*#include<stdio.h>
int main () // as main() is written first if prototyping is not used the code wont run
{
    void func(); // this is the line for prototypinga function
    func();
    return 0;
}
void func()
{
    printf("hello");
    return;
}*/


#include<stdio.h>
int main()
{
    void bangladesh(); // prototyped
    bangladesh();  // actually code starts from here 
    // after 3 functions are called like a thread and do their respective works the code exits 
    return 0;
}
void pakistan()
{
    void india(); // prototyped
    printf("pakistan\n"); // prints pakistan
    india(); // calls india 
    return;
}
void india ()
{
    printf("india\n"); // prints india 
    return; // returning nothing as return type is set to void 
}
void bangladesh()
{
    printf("bangladesh\n"); // prints bangladesh
    pakistan(); // calls pakistan
    return;
}