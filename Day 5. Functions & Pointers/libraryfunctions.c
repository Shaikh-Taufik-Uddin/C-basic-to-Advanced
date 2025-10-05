#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    printf("enter a number: ");
    scanf("%d",&a);
    int root=sqrt(a); // sqrt is a library function
    printf("%d",root);
    return 0;
}