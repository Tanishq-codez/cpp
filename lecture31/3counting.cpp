#include<iostream>
using namespace std ;
void count ( int n){
    if (n==0)return ;
    count(n-1);      //head recursion
    cout << n <<endl;}
int main (){
    int n ;
    cin >> n ;
     count(n);
} 