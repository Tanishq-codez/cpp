#include<bits/stdc++.h>   // <iostream>
#include<cmath>
using namespace std ;
int main (void)
{   int n ;
    cout << "enter binary";
    cin >> n;
    int power = 1  ;
    int i =0 ;
    int dec= 0 ;
     while (n!=0)
     {
        int bit = n %10 ; 
        int digit = bit * pow (2,i);
        i++;
        dec = dec + digit ;
        n = n /10 ; 
        
  }
    cout << dec ;
     
    
    return 0 ;
}