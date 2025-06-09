//check if enterd char is upercase or not
#include<iostream> 
using namespace std ;
int main ()
{ char a ;
//num 1 to 9 are also chracters
  cout<<"enter the character";
  cin >> a ;
  if(a>64 && a<91)cout<<"its an uppercase"; // dont use 91>a>64 to specify range

  else if(58>a && a>47)cout<<"its a number";

  else if (96<a&& a<123)cout<<"its a lowercase";

   else cout<<"none"; 

    return 0 ;
}
