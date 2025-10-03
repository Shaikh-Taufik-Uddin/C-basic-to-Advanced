// #include<stdio.h>
// int main ()
// {
//     int a ;
//     int lastdigit ;
//     printf("enter a number : ");
//     scanf("%d",&a);
//     while(a>0)
//     {
//         lastdigit=a%10;
//         printf("%d",lastdigit);
//         a=a/10;
//     }
//     return 0 ;
// }

// for storing it 

#include<stdio.h>
int main ()
{
    int a ;
    int lastdigit ;
    int revnum=0;
    printf("enter a number : ");
    scanf("%d",&a);
    while(a>0)
    {
        lastdigit=a%10;
        revnum = lastdigit+revnum*10;
        a=a/10;
    }
    printf("\n%d",revnum);
    return 0 ;
}