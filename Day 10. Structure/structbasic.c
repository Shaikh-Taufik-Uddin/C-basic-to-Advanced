#include <stdio.h>
int main()
{
    struct pokemon // user defined data type ( just another data  type like int/float/char)
    {
        int hp;
        int speed;
        int attack;
        char tier;
    }; // notice here ; is important
    struct pokemon pikachu; // struct pokemon is the datatype and pikachu is the variable (like int a;)
    printf("Enter pikachu's health: ");
    scanf("%d", &pikachu.hp); // user input
    pikachu.attack = 69;      // like (int i=0) // here we use dot(.)operator to give attributes
    pikachu.speed = 100;
    pikachu.hp; // can be stored like this too
    pikachu.tier = 'A';
    struct pokemon snorlax;
    snorlax.hp = 300;
    snorlax.attack = 30;
    snorlax.speed = 5;
    snorlax.tier = 'F';
    struct pokemon mewtwo;
    mewtwo.hp = 300;
    mewtwo.attack = 500;
    mewtwo.speed = 150;
    mewtwo.tier = 'S';
    printf("%d", pikachu.attack);
    printf("\n%d", pikachu.hp);
    return 0;
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
    struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier[69];
        int iq[99];
    };

    struct pokemon pikachu;
    pikachu.attack = 69;
    pikachu.speed = 100;
    pikachu.hp = 80;
    strcpy(pikachu.tier, "Fast as fuck"); // we need to either define strings at the time of declaration or like this for later inputs ;
    pikachu.iq[0] = 999; // while for arrays it is normally done
    printf("%s", pikachu.tier);
    printf("\nwith iq of %d", pikachu.iq[0]);

    return 0;
}*/