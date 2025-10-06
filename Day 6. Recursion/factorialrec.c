#include<stdio.h>
int factorial(int a)
{
    if(a==1 || a==0) // this is called a base statement ; means the condition where the loop of the function calling (recurring) itself stops 
    {
        return 1; // without this return the function will be stuck in a infinite loop of calling itself 
    }
    int recans= a*factorial(a-1); // we know n!= n(n-1)!
    return recans;
}
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int f=factorial(n);
    printf("%d",f);
    return 0;
}