#include <stdio.h>
#include <string.h>

int main()
{
    struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier[69];
        int iq[99];
    } pikachu, charizard, magmar; // defined 3 variables in the same line
    // struct pokemon pikachu = {80, 100, 69, "sexy"}; // Initialize all fields at once
    return 0;
}