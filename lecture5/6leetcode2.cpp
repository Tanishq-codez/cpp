//count the no of ones(one bits) in binary representation
#include<bits/stdc++.h>   // <iostream>
#include<cmath>
using namespace std ;
int main (void)
{   int n ;
   cout << "enter value of n" <<endl;
   cin >> n ;
   int count = 0 ;
   while(n!=0){
    if (n%2==1){count = count +1;}
    n = n >> 1 ; 
}
    cout <<"the numbers of one bits = "<< count ; 
    
    
 return 0 ;
}