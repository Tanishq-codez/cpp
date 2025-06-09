#include<bits/stdc++.h>   // <iostream>
#include<cmath>
using namespace std ;
int main (void)
{  int n ;
    cout<<"enter the value of n ";
    cin >> n ;
    int bin = 0 ;
    int place = 1;
    
    while (n!=0){
        int digit = n & 1 ;
        bin = bin + place*digit;
        place = place * 10 ; 
         n = n >> 1 ;
    }

    cout << bin ;
    
    return 0 ;
}
