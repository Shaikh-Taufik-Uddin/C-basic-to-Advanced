#include<stdio.h>
void tower(int n,char s,char h,char d) // suppose s(source) as 1st rod ; h(helper) as 2nd rod ; d(destination) as 3 rd rod ;
{
    if(n==0) return; /// finally the recursion stops when no smaller pyramid is left 
    tower(n-1,s,d,h); // smaller pyramid of n-1 is generated ; and the 2nd pyramid is told that s(1st) is his 1st rod ; and h (2nd) is his d (3rd) and vice versa ; so h and d are interchanged ;
    printf("%c->%c\n",s,d); // as we are still in same function so , the smaller pyramid is moved to actual h(2nd) from s(1st) and we suppose the last/biggest value is moved from 1st rod (s) to actual destination 3rd rod(d) ;
    tower(n-1,h,s,d); // now actually the smaller pyramid was actually just shifted to 2nd rod(h) emulated as its d(3rd) ; so now in this line the smaller pyramid is actually shifted to its real destination 3rd(d) rod ; but again emulating its current position h(2nd) rod as s(1st) rod and vice versa ; so this time h and s are interchanged ;
    return;
}
int main()
{
    int n;
    printf("Enter number of disks : ");
    scanf("%d", &n);
    tower(n,'a','b','c');
    return 0;
}

// euler diagram for understanding how values are going 
/*
tower(3, A, B, C)
├─ tower(2, A, C, B)        
│  ├─ tower(1, A, B, C)     
│  │  ├─ tower(0, A, C, B)  
│  │  ├─ print A->C         
│  │  └─ tower(0, B, A, C)  
│  ├─ print A->B           
│  └─ tower(1, C, A, B)    
│     ├─ tower(0, C, B, A)  
│     ├─ print C->B        
│     └─ tower(0, A, C, B) 
├─ print A->C               
└─ tower(2, B, A, C)        
   ├─ tower(1, B, C, A)    
   │  ├─ tower(0, B, A, C) 
   │  ├─ print B->A         
   │  └─ tower(0, C, B, A)  
   ├─ print B->C            
   └─ tower(1, A, B, C)    
      ├─ tower(0, A, C, B)  
      ├─ print A->C         
      └─ tower(0, B, A, C)   
*/
