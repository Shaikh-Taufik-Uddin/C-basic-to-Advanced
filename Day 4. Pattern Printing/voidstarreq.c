#include<stdio.h>
int main()
{
    int a ;
    int b ;
    printf("enter the length of the rectangle: ");
    scanf("%d",&a);
    printf("enter the width of the rectangle: ");
    scanf("%d",&b);
    for(int i=1;i<=b;i++)
    {
        for(int j=1;j<=a;j++)
        {
            if(j==1 || j==a || i==b || i==1)
            {
                printf(" * ");
            }
            else{printf("   ");}
        }
        printf("\n");
    }
    return 0;
}