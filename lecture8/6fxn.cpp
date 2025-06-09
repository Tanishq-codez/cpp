#include<bits/stdc++.h>   // <iostream>
#include<cmath>
using namespace std ; 
bool ifeve(int a){  // this is pass by value
    if (a&1) return 0 ; 
    else return 1 ;
}
int main (void)
{
       int n ;
       cout<<"enter the value";
       cin >> n;

      // int ans = ifeve(n);
      // if (ans){cout<<"its even";}
       
       if (ifeve(n)) {cout<<"its even";}
       else cout<< "its odd";
    
    return 0 ;
}
