#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct pokemon
    {
        char name[100];
        int hp;
        int atk;
        char tier;
    } pkmn;
    pkmn a, b, c;
    a.atk = 100;
    strcpy(a.name, "pikachu");
    // method 1 of copying

    // b.atk = a.atk;
    // strcpy(b.name, a.name)

    // method 2
    b = a; // all property of a is copied into b ;
    // we can change b after it too
    strcpy(b.name, "blastoise");
    // b is a deepcopy of a ;
    return 0;
}