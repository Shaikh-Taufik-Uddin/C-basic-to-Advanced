#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("enter a: ");
    scanf("%d",&a);
    printf("enter b: ");
    scanf("%d",&b);
    // using 3rd variable -> int temp=a;a=b;b=temp; easiest
    a=a+b; // without using 3rd varibale
    b=a-b;
    a=a-b;
    printf("a=%d\n",a);
    printf("b=%d",b);
    return 0;
}

 

