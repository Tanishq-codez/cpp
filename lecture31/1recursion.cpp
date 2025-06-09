//badi prblm ka sol include choti problem ka sol
//without break condition there will be runtime error - stack overflow
//compile- syntax to machine readable code
// factorial by recursion
#include<iostream>
int fact(int n){
    if (n==0) return 1 ;    //break cond / base case
    int ans = n*fact(n-1);  //recursive relation
    return ans; }           
using namespace std ;
int main (){
    int n ;
    cin>> n ;
    cout<<fact(n);

}