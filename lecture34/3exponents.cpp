//base raise to power expo 
#include<iostream>
using namespace std ;
int power(int b , int e){
    if(e==0) return 1 ;
    int optimization = power(b,e/2) ;
    if(e%2==0)return optimization*optimization;
    else return b*optimization*optimization;
}
int main (){
    int a , b ;
    cout<<"enter the base";
    cin>>a ;
    cout<<"enter the exponent";
    cin>>b;
    cout<<"the ans is "<<power(a,b);
}