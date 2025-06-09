#include<bits/stdc++.h>   // <iostream>
#include<cmath>
using namespace std ;
int main (void)
{   int n ;
     cout << "enter the amount";
     cin >> n ;
     int rs100 , rs50 , rs20 , rs1;

     rs100 = n/100;
     n=n%100;

     rs50=n/50;
     n=n%50;

     rs20=n/20;
     n=n%20;

     rs1= n/1;
     
     cout<<"100rupees notes ="<<rs100<<endl<<
     "50rupees notes ="<<rs50<<endl<<"20rupees notes ="<<rs20<<endl
     <<"1 rupees notes = "<<rs1<<endl;

return 0 ;
}