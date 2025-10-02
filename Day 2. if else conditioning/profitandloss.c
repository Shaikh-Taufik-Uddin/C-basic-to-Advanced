#include <stdio.h>
int main ()
{ int cost ;
    int sell ;
    printf ("enter cost of the item ");
    scanf("%d",&cost);
    printf("enter selling price ");
    scanf("%d",&sell);
    int profit ;
    profit= sell-cost;
    if(profit>0)
    {printf("The seller has made a profit of %d rupees",profit);}
    if(profit==0)
{printf("The seller has made no profit");}
if(profit<0)
{profit=profit*(-1);
    printf("the seller has faced a loss of %d rupees",profit);}
    return 0 ;

}
