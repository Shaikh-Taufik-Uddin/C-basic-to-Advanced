#include<stdio.h>
void greet() // greet, an user defined function 
{
    printf("Okay\n");
    printf("did you understand ?\n");
    printf("lets move on to the next topic..\n");
    return; // finishing a function
}
int main() // regardless of where you write main function runs first of all in computer
{
    greet(); // greet fucntion is called . now the upper written function will work top to bottom
    greet();
    greet();
    return 0;
}