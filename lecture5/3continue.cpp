#include<bits/stdc++.h>   // <iostream>
#include<cmath>
using namespace std ;
int main (void)
{
    int n  = 10 ;
    for (int i =1 ; i<=n; i++){
       // cout <<n ;
        if(i%2==0)continue;       // continue chala to loop restart
                                  // break chala to loop finish

        cout<<i<<" ";
    }
    return 0 ;
}
