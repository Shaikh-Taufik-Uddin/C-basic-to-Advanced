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
    pkmn pokemons[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter name: ");
        scanf(" %[^\n]", &pokemons[i].name); // space in scanf for negating buffers 
        printf("Enter hp: ");
        scanf("%d", &pokemons[i].hp);
        printf("Enter attack: ");
        scanf("%d", &pokemons[i].atk);
        printf("Enter speed: ");
        scanf("%d", &pokemons[i].spd);
        printf("Enter tier: ");
        scanf(" %c", &pokemons[i].tier); // space in scanf for negating buffers
    }
    for (int i = 0; i < 3; i++)
    {
        printf("Name: %s\n", pokemons[i].name);
        printf("HP: %d\n", pokemons[i].hp);
        printf("ATK: %d\n", pokemons[i].atk);
        printf("SPD: %d\n", pokemons[i].spd);
        printf("Tier: %c\n", pokemons[i].tier);
    }
    return 0;
}