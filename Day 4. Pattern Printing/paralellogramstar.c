
// logical way 

#include<stdio.h>
void main()
{
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=2*n-1;j++)
        {
           if(i+j<n+1 || i+j>2*n) 
           {
            printf(" ");
           }
           else printf("*");
        }
        printf("\n");
    }
}


// accidentaly found this code from an error while solving for mirroed triangle !! and guess what !! it freaking matched with the logially coded version below lmaooo!!
// mix of two code version


#include<stdio.h>
void main()
{
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
           printf(" ");
        }
        for(int k=1;k<=n;k++)
        {
          printf("*") ;
        }
        printf("\n");
    }
}
