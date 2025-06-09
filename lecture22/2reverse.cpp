//same logic as to reverse an array
#include<iostream>
#include<cstring>
#include<utility>
using namespace std ;
int main (){
    char str[10]="tanishqji";//one place for null char
     
    int s = 0 ;
    int e = strlen(str)-1;

    while(s<e){
        swap(str[s++],str[e--]);
        
    }
    cout << str ;}