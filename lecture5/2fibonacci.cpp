#include<bits/stdc++.h>   // <iostream>
#include<cmath>
using namespace std ;
int main (void)
{   
    int n ;
    cout<<"enter value of n";
    cin>>n ;
    int a = 1, b=1 ;
    cout<<"1"<<endl;
    cout<<"1"<<endl;
    for(int i = 1 ; i<=n-2 ; i++){
        int c=a+b ; 
        cout<< c << endl ;
        a=b;           // if you use int a then it wont work
        b=c;           // if a variable declared inside the loop it looses value after each iteration

         }

    return 0 ;
}
