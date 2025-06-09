#include<bits/stdc++.h> // <iostream>
#include<cmath>
using namespace std ;
int main (void)
{  int n; 
   cout<<"enter num rows";
   cin>> n;
   for(int i =1 ; i<=n;i++){
    for(int j = 1;j<=n;j++){ 
        if(j<n-i+1){cout<<" ";}
        else cout<<j-4+i;
    }
        for(int k = 1 ; k<=(i-1); k++){
            cout<<i-k;
        }
       cout<<endl;
   }

    
    return 0 ;
}
