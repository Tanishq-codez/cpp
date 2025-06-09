#include<iostream>
using namespace std ;

int& func(int a){
  int num = a   ; 
  int &ans =  a;  // refrence to local variable should not be returned
  return ans ;
}                 // same with pointer

int main (){
     int  n = 5 ;
     func(n);
 }