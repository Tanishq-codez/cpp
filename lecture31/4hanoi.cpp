//any no of rings can be equivalent to 2 rings 
// one bottom and rest as one ring
#include<iostream>
using namespace std ;
void tower ( int n , char s , char h , char d)
{ if(n==0){return; // base case for a tower of zero disks
} tower(n-1,s,d,h); // bottom disk chodke sab helper pe (chota ques)
  cout<< n << s << d << endl; //  bottom disk from source to destination
    tower(n-1,h,s,d) ;}  //  helper pe jo pada hai use destination pe daal de
int main (){
    int x ;
    cin >> x ;
    tower(x,'S','H','D') ;


  
}