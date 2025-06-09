#include<bits/stdc++.h> // <iostream>
#include<cmath>
using namespace std ;
int main (void)
{ int n ;
  cout<<"enter num of rowes";
 cin >> n ;
 for (int i=1 ; i<=n ; i++){
    for(int j =1 ;j <= n ; j++){
    if (i>n-j+1) cout << "*";
    else cout <<j;}

 for (int k = 1 ; k <= n ; k++){
   if (i>k)cout<<"*";
   else cout << n-k+1        ;
 } 
    
  cout << endl;
 }

    return 0 ; 
}
