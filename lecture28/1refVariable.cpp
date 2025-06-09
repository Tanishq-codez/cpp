#include<iostream>
using namespace std ;
int main (){
    int i = 5 ;
    
    int &j = i ; //j is reference variable 

    i++;
    j++;// ref variable is another name to same memory 
 cout << i<<" "<< j ;}