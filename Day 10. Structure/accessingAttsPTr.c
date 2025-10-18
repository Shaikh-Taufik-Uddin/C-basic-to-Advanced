#include <stdio.h>
typedef struct pokemon
{
    int hp;
    int atk;
} pkmn;
int main()
{
    pkmn raichu;
    raichu.hp = 150;
    raichu.atk = 100;
    printf("%d\n%d\n", raichu.hp, raichu.atk);
    pkmn *x = &raichu;
    (*x).atk = 200; // () is necessary for these operations
    (*x).hp = 100;
    printf("%d\n%d", raichu.hp, raichu.atk);
    return 0;
}