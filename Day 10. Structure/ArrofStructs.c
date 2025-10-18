#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct pokemon
    {
        char name[100];
        int hp;
        int atk;
        int spd;
        char tier;
    } pkmn;
    pkmn details[3];
    details[0].atk = 50;
    details[0].hp = 80;
    details[0].spd = 190;
    details[0].tier = 'A';
    strcpy(details[0].name, "pikachu"); // can also br printed with for loop for multiple pokemons
    printf("Name: %s\n", details[0].name);
    printf("HP: %d\n", details[0].hp);
    printf("ATK: %d\n", details[0].atk);
    printf("SPD: %d\n", details[0].spd);
    printf("Tier: %c\n", details[0].tier);
    return 0;
}