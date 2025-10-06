#include<stdio.h>
// code can appear after recursive call too !! 
void printer(int a)
{
    if(a==0) //base case 
    {
        return;
    }
    // printf("%d ",a); // code written before recursive call // so the values will be printed in straight order as the code begins from N to 1
    printer(a-1); // recursive call
    printf("%d ",a); // code written after recursive call // so the values will be printed in reverse order as the code reverses to its beginning from 1 to N 
    return;
}
int main()
{
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    printer(n);
    return 0;
}