#include <stdio.h>

int main()
{
    int a;
    float b;
    char c;
    char str[100];
    gets(str); // gets has to be used first of everything else because gets() cannot clear buffer value . else we have to use while(getchar()!='\n'); condition to clear buffer value
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%f", &b);
    printf("Enter c: ");
    scanf(" %c", &c); // the space is needed here to clear the input buffer ]
    puts(str);
    printf("%d", a);
    printf("\n%f", b);
    printf("\n%c", c);
    return 0;

}
