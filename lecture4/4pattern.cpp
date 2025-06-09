#include<bits/stdc++.h> // <iostream>
#include<cmath>
using namespace std ;
int main (void)
{int n ;
    cout<<"enter the number of rows"<<endl;
    cin >> n ;

    for(int i = 1 ; i<=n  ; i++){
        
        for(int j = 1 ; j<=i ; j++){
            char a = 'D'-i+j;
            cout<< a ;
        }
        cout<<endl;
    }



      return 0 ;
}
