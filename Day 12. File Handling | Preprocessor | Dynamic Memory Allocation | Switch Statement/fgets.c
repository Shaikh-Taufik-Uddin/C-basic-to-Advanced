#include <stdio.h>
#include<string.h>
int main()
{
    char str[100]; // string created
    fgets(str, sizeof(str), stdin);
    // fgets -> function , str -> where the input will be stored ,
    // 100 -> till what limit it should take input / sizeof(str) would also work ,
    // stdin-> what to take inputs from / use stdin for taking inputs from keyboard
    puts(str);
    return 0;
}