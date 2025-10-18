#include <stdio.h>
typedef struct pokemon
{
    int hp;
    int atk;
} pkmn;
int main()
{
    pkmn pika;
    pika.atk = 69;
    pika.hp = 100;
    pkmn *x = &pika; // pointer x is declared and pointed towards pikas address
    printf("%p", x);
    printf("\n%p", &pika.hp); // same address as the whole pika ( because array charecteristics )
    printf("\n%p", &pika.atk);
    return 0;
}