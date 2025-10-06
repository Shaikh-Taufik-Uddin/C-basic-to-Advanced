// path ways where max jump allowed is 2
// #include<stdio.h>
// int paths(int n)
// {
//     if(n==1)return 1;
//     if(n==2)return 2;
//     int p=paths(n-1)+paths(n-2);
//     return p;
// }
// int main()
// {
//     int n;
//     printf("enter the value of n: ");
//     scanf("%d",&n);
//     int p=paths(n);
//     printf("%d",p);
//     return 0;
// }

// path ways where max jump allowed is 3

#include<stdio.h>
int paths(int n)
{
    if(n==1)return 1;
    if(n==2)return 2;
    if(n==3)return 4;
    int p=paths(n-1)+paths(n-2)+paths(n-3);
    return p;
}
int main()
{
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    int p=paths(n);
    printf("%d",p);
    return 0;
}