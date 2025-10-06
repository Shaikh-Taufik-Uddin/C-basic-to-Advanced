//using 2 parameters 
// logic -> starting position 3,3 (for 2x2 maze) and destination 1,1 
// so going down -> a-1,b (row is decreasing while column is same )
// going right -> a,b-1 (row is same while column is increasing )

#include<stdio.h>
int ways(int a, int b)
{
    int right=0;
    int down=0;
    if(a==1 && b==1) return 1; // came to destination
    if(a==1) // cant go down
    {
        right+=ways(a,b-1);
    }
    if(b==1) // cant go right
    {
        down+=ways(a-1,b);
    }
    if(a>1 && b>1)
    {
        right+=ways(a,b-1);
        down+=ways(a-1,b);
    }
    int total=right+down;
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
    int w=ways(a,b);
    printf("%d",w);
    return 0;
}