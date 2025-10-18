#include <stdio.h>
#include <string.h>
typedef struct pokemon
{
    int hp;
    int atk;
    char name[100];
} pkmn;
void change(pkmn *p)
{ // method 1
    // (*p).atk = 300;
    // (*p).hp = 200;
    // strcpy((*p).name, "Mega Raichu");

    // method 2
    p->atk = 300; // -> works same as (*p).
    p->hp = 200;
    strcpy(p->name, "mega raichu");
}
int main()
{
    // pkmn raichu;
    // raichu.hp = 150;
    // raichu.atk = 100;
    // cleaner initialization
    // strcpy(raichu.name, "raichu");

    // pkmn raichu = {150, 100, "raichu"}; // order of stats to be maintained here this is cleaner approach

    // hybrid of 2 methods is also viable .. some declared on spot some later .. but order is important again 1..2..x...4.. not possible like this 

    pkmn raichu = {150, 100};
    strcpy(raichu.name, "raichu");

    printf("%d\n%d\n", raichu.hp, raichu.atk);
    puts(raichu.name);
    pkmn *x = &raichu;
    change(x); // change(&raichu; also viable
    printf("%d\n%d\n", raichu.hp, raichu.atk);
    puts(raichu.name);
    return 0;
}