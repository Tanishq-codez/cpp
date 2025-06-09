// mini calculator
#include<bits/stdc++.h>   // <iostream>
#include<cmath>
using namespace std ;
int main (void)
{
    int a , b ;
    cout << "enter value of a";
    cin >> a ;
    cout << "enter value of b";
    cin >> b;

    char c ;
    cout << "enter the operation ";
    cin >> c ;

    switch (c)
    {
    case '+': cout<<a+b;// 'single quote aur char ka tru lub'
    break;

     case '-': cout<<a-b;
     break ;

      case '*': cout<<a*b;
      break ;

       case '/': cout<<a/b;
       break ;
    
    default: cout <<"error";
        break;
    }


    return 0 ;
}