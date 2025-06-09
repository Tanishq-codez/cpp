#include<bits/stdc++.h> // <iostream>
#include<cmath>
using namespace std ;
int main (void)
{   int n ;
    cout<<"enter the number of rows";
    cin >> n ;
   int count = 1;
    for(int i = 1; i<=n; i++){

        for(int j =1 ;j<=n; j++){
            if(j<n-i+1){cout<<" ";}
            else {cout<<count;
            count ++;}
            }
        cout<<endl;
    }
 

    return 0 ;
}
