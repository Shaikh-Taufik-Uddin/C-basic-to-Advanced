#include <stdio.h>
int main()
{
    struct packman
    {
        int hp;
        int atk;
    };
    struct packman pikachu = {100, 150};
    printf("%d\n%d\n", pikachu.hp, pikachu.atk);

    // in union only one attribute can be used at a time
    // else last modified value is thrown as error  

    union pokemon
    {
        int hp;
        int atk;
    };
    union pokemon raichu;
    raichu.atk = 69;
    raichu.hp = 10;
    printf("%d\n%d\n", raichu.hp, raichu.atk); // only hp will be printed right 
    return 0;
}