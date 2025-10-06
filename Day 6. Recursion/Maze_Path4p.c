//using 4 parameters 

#include<stdio.h>
int ways(int cr, int cc, int er ,int ec)
{
    int right=0;
    int down=0;
    if(cr==er && cc==ec) // we have reached the end case 
    {return 1;}
    if(cr==er) // only right ways are possible 
    {right = ways(cr,cc+1,er,ec);}
    if(cc==ec) // only down ways are possible
    {down = ways(cr+1,cc,er,ec);}
    if(cc<ec && cr<er) // both ways possible
    {
        right = ways(cr+1,cc,er,ec);
        down = ways(cr,cc+1,er,ec);
    }
    int total=right+down; // total ways
    return total;
}
int main()
{
    int a ;
    int b ;
    printf("enter rows of the maze: ");
    scanf("%d",&a);
    printf("enter coloumns of the maze: ");
    scanf("%d",&b);
    int w=ways(1,1,a,b);
    printf("%d",w);
    return 0;
}

