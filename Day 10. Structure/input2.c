// gets causes cancer stay back from using it its deprecated in c11
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
        printf("Enter Name : ");
        gets(pokemons[i].name); // or scanf(" %[^\n]",pokemons[0].name); // extra space to negate buffer
        printf("Enter HP : ");
        scanf("%d", &pokemons[i].hp);
        printf("Enter ATK : ");
        scanf("%d", &pokemons[i].atk);
        printf("Enter SPD : ");
        scanf("%d", &pokemons[i].spd);
        printf("Enter TIER : ");
        scanf(" %c", &pokemons[i].tier);
        while (getchar() != '\n')
            ; // buffer clearence for upcoming next loop
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