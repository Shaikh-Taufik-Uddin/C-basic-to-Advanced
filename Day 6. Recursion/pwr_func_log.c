// big problem in this code is it only can calculate even number of powers 
// #include<stdio.h>
// int power(int a,int b)
// {
//     if(b==1) return a;
//     int p1= power(a,b/2)*power(a,b/2);
//     return p1;
// }
// int main()
// {
//     int a;
//     int b;
//     printf("enter the value of a: ");
//     scanf("%d",&a);
//     printf("enter the value of b: ");
//     scanf("%d",&b);
//     int p=power(a,b);
//     printf("%d",p);
//     return 0;
// }

// so in this case we made two cases for each even and odd power 

// #include<stdio.h>
// int epower(int a,int b)
// {
//     if(b==1) return a;
//     int x= epower(a,b/2); // also doable instead of writing again and again
//     int p=x*x ; // this also reduces load by huge amount 
//     return p;
// }
// int opower(int a,int b)
// {
//     if(b==1) return a;
//     int x= opower(a,b/2); // int p= opower(a,b/2)*opower(a,b/2)*a;
//     int p=x*x*a ; 
//     return p;
// }
// int main()
// {
//     int a;
//     int b;
//     printf("enter the value of a: ");
//     scanf("%d",&a);
//     printf("enter the value of b: ");
//     scanf("%d",&b);
//     if(b==0) 
//     printf("1");
//     if(b%2==0)
//     {
//     int p=epower(a,b);
//     printf("%d",p);
//     }
//     else
//     {
//     int p=opower(a,b);
//     printf("%d",p);
//     }
//     return 0;
// }

// best code for most efficiency and all cases like b=100 , where 25 also comes at the 3rd iteration
#include<stdio.h>
int power(int a, int b)
{
    if (b == 0) return 1;          // base case
    int x = power(a, b / 2);
    if (b % 2 == 0) 
        return x * x;             // even exponent
    else 
        return x * x * a;         // odd exponent
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