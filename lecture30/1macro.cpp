#include<iostream>
//with marco No Semicolon
#define pi 3.14  //macro doesnot req storage
#define area(r) pi*r*r  //it execute during compile time
                  // macro is not modifiable value
using namespace std ;
int main (){
      int n = 10 ;
      
cout << area(n);
// geeeks for geeeks documentation
}