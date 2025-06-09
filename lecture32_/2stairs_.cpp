//no of ways to climb n stairs with combination of 1 and 2 steps

//bas ek case solve karo baaki recursion dekh lega
#include<iostream>
using namespace std ;
int stairs(int n){
    if(n<0)return 0;
    if(n==0) return 1 ;
    //ya toh pichli seedi se aaye hain 1 chalang marke ya usse pichli se aayein hain2 schalang marke
    return stairs(n-1)+stairs(n-2);}
int main(){
int n ;
cin>>n;
cout<<stairs(n);
}