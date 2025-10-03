#include<stdio.h>
int main()
{
    int a ;
    int b ;
    int p=1;
    printf("enter the value of a ");
    printf("and enter the value of b ");
    scanf("%d%d",&a,&b);
    for(int i=1;i<=b;i++)
    {
        p=p*a;
    }
    printf("%d",p);

    return 0;
}