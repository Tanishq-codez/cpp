//revrsing a numbr
#include<iostream>

using namespace std ;
int main (void)
{int n ;
   cout << "enter the value of n ";
   cin >> n ;
    int sum = 0 ;
    int i = 0;

   while (n!=0) {
      sum = sum *10 ;
      int digit = n % 10 ;
      n = n / 10 ;
      sum = sum + digit ;
      if (sum>=INT_MAX/10 || sum<=INT_MIN/10) 
      {cout<<"0";
      i++;
      break ; }
     }
      if(i==0)cout << sum ;
    
    return 0 ;
}