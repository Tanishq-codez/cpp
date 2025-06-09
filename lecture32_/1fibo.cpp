//fibonacci using recursion
#include<iostream>
using namespace std ;
int fibo (int n){
    if(n==1)return 0 ; //base case wont call a fnx again
    if(n==2)return 1;
    int a = fibo(n-1) + fibo(n-2);
    return a;
}

int main (){
    int n ;
    cin >> n ;
    cout<< fibo(n);
}