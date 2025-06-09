// reverse a string using recursion
#include<iostream>
#include<string>
#include<algorithm>
using namespace std ;
void reverse(string &s , int start , int end){
  if(start>=end)  {cout<<s ;
   return ;} 
  swap(s[start],s[end]);
  return reverse(s , start +1 , end -1 ) ;
 
  //return type of base case must match the datatype
  // could also do string reverse() ----> return s ;
}
int main (){
    string str = "hello world";
    int size = str.size();
// cout<<size;
    int start =0 ;
   reverse(str,start ,size-1);
   cout<<str ; // original string modified ; pass by reference
   
   // could be done with one pointer j=size-i :)
}