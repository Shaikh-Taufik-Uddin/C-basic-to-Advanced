#include <stdio.h>
int main()
{
    typedef struct date
    {
        int day, month, year;
    } dt;
    dt arr[2];
    for (int i = 0; i < 2; i++)
    {
        printf("enter day: ");
        scanf("%d", &arr[i].day);
        printf("enter month: ");
        scanf("%d", &arr[i].month);
        printf("enter year: ");
        scanf("%d", &arr[i].year);
    }
    for (int i = 0; i < 2; i++)
    {
        printf("%d/", arr[i].day);
        printf("%d/", arr[i].month);
        printf("%d", arr[i].year);
        printf("\n");
    }
    // a==b not possible like a=b ;
    if (arr[0].day == arr[1].day &&
        arr[0].month == arr[1].month &&
        arr[0].year == arr[1].year)
    {
        printf("They are the same\n");
    }
    else
    {
        printf("They are different\n");
    }
    return 0;
}