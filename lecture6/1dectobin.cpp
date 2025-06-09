#include<bits/stdc++.h>   // <iostream>
#include<cmath>
using namespace std ;
int main (void)
{       int n ;
       cout << "enter the value of n ";
       cin >> n ;
       int place = 1 ;   // used for reverse printing 
       int bin = 0 ; 
          
          
           while(n!=0){  
             int rem = n % 2  ; 
            bin = bin + (rem*place) ;
            place = place * 10 ;
            n = n / 2;
   }
        cout<< bin ; 
    return 0 ;
}