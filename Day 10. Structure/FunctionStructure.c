#include <stdio.h>
// this outside main() declaration makes the datatype globally accessible
typedef struct pokemon // always best practice is to declare outside 
{
    int hp, attack;
} pkmn;
void worker2(pkmn packman) // pkmn is defined & pookiemon(originally pika) stats are passed into packman
{
    printf("%d", packman.attack); // prints attack
}

void worker(struct pokemon pookiemon) // struct pokemon is defined too & pika stats are stored / passed into pookiemon
{
    pookiemon.attack = 440;     // changes attack value
    printf("%d\n", pookiemon.hp); // prints hp
    worker2(pookiemon);         // calls another function
}

int main()
{
    /*
    // this datatype is inside the main() so it is not globally available so cant be called in a function outside
    typedef struct pokemon
    {
        int hp, attack;
    } pkmm;
    */
    pkmn pika;
    pika.attack = 100;
    pika.hp = 150;
    worker(pika);
    return 0;
}
// structures are pass by value not reference 
