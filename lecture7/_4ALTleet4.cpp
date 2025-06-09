#include <iostream>
#include<cmath>
using namespace std;
int main (){
    int place = 1;
    int ans = 0 ;
    int x , invert  ;
    cout<<"enter the input";
    cin >> x ;
    if(x==0){
        cout<<"the output is 1";
        return 0 ;
    }
    int j = 0 ;
    while(x!=0){
        int unit = x&1 ;
        if(unit==0) invert=1<<j;  //=(pow(2,j)) ;
        else invert= 0 ;
        ans = ans + invert;
        x=x>>1;
        j++;
    }

    cout<<"the output is " <<ans ;

    return 0 ;
} 