#include<iostream>
using namespace std ;
int main (){
    int n = 69 ;
    
    cout << &n ; // address of --> & (hexadecimal format)
    int *ptr = &n ;// a pointer is used to store address

    cout<<*ptr ; // == value at ptr 
    cout<<ptr  ; // prints &n

    //size of pointer is 8bytes
    cout<<endl<<sizeof(ptr);
    
    
    //another way
    int *p = 0 ; // dont create wild pointers
    p = &n ; // not *p=n (only during initialization)
    cout<<*p ;
    

    //copying a pointer 
    int *q = p ;

    // importnt concept 
    p=p+1 ;// pointer arithmetic 100-->104
           // ek block aage

    // cant do arr++(trying to update symbol table)
    // sizeof doesnot treat arr as pointer
    // when we pass to an array to a fxn we pass the pointer



}