#include<stdio.h>
int main()
{
    int a ;
    printf("enter your percentage: ");
    scanf("%d",&a);
    if(a>90)
    {printf("a grade");}
    else if (a>60)
    {printf("b grade");}
    else if (a>40)
    {printf("c grade");}
    else {printf("d grade");}
    return 0;

}