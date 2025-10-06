#include<stdio.h>
int power (int a, int b)
{
    if(b==0) return 1;
    return a*power(a,b-1);
}
int main()
{
    int a;
    int b;
    printf("enter the value of a: ");
    scanf("%d",&a);
    printf("enter the value of b: ");
    scanf("%d",&b);
    int p=power(a,b);
    printf("%d",p);
    return 0;
}