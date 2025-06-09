//to count no of one bits
#include<bits/stdc++.h>
#include<cmath>
using namespace std ;
int setbits(int a , int b) {
    int i= 0 , j = 0;
    while(a!=0){
        if(a&1)i++;
        a = a>>1; }
    while(b!=0){
        if(b&1)j++;
        b = b>>1;}
    
    return i + j ;

}
int main (){
    int a , b ;
    cout << "enter 1st number";
    cin >> a ;
    cout << "enter 2nd number";
    cin >> b ;

     cout << setbits(a,b) ;
     return 0 ;
}