#include<bits/stdc++.h>
using namespace std ;
int main ()
{   int n ;
    cout << "enter value of n";
    cin >> n ;

    for (int i = 0; i < n ; i++)
    {    for(int j=0; j<n ; j++ ) 
         {cout<<j+3*i;}   // you can also introduce a 3rd variable called count 
         cout<<"\n";

    }
    

    return 0 ;
}