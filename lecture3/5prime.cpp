#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int a ;
    cout << "enter the number to be checked ";
    cin >> a ;

    int i = 2 ;
    int j = 1 ;

    while ( i<a ){
        if(a%i==0) {cout<<"not prime";
                     j++;
                    break;} // break == exit the while loop 
        i++;            
    }
    if(j==1)cout<<"prime";


    return 0 ;
}