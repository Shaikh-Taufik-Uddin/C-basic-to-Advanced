#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct pokemon
    {
        int hp, speed, attack;
    } pkmn;
    typedef struct legendarypokemon
    {
        pkmn normal;
        int spattack;
    } lpkmn;
    typedef struct godpokemon
    {
        lpkmn normal;
        char tier[30];
    } gpkmn;
    // nesting can be done like this many times 
    lpkmn mewtow;
    mewtow.normal.attack = 150; // access nested attributes like this
    mewtow.normal.hp = 200;
    mewtow.normal.speed = 200;
    mewtow.spattack = 300;
    // accessing nested attributes 
    gpkmn arceus;
    arceus.normal.normal.attack = 300;
    arceus.normal.normal.hp = 500;
    arceus.normal.normal.speed = 400;
    arceus.normal.spattack = 800;
    strcpy(arceus.tier, "GOD");
    return 0;
}