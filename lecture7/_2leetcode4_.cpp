//**find the base 10 complement 7(111)-->0(000)
//                              5(101)-->2(010)
#include<bits/stdc++.h>   // <iostream>
#include<cmath>
using namespace std ;
int main (void)
{ int x ;
    
   cout << " enter the value of x : ";
   cin >> x ;

   if (x==0){cout<<1;
    return 0 ;}
   int i = x ;
   int mask = 0 ;
           //mask
   while (x!=0){
      x=x>>1;
      mask=mask<<1;
      mask=mask|1;
   }
        //(invert) x & mask 
    int invert = ~i;
    int ans = invert & mask ;

    cout << ans ;

    return 0 ;
}
//edge case = 0 ; dry run on -1;0;2^32