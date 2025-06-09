#include<iostream>
#include<array>

using namespace std ;

int main (){
    // int a[4]={1,2,3,4};

    // taking input
    array<int,4> a = {1,2,3,4,} ;
    
    //size of stl array                         .size()
    int size = a.size();// cant be done with normal array
    
    // to print normally
    for (int i = 0 ; i<size ; i++){
        cout<<a[i]<<endl ;
    }

    //new way                                    .at()
    cout<<"element ar 2nd index"<<a.at(2)<<endl ;

    // empty or not , returns bool              .empty()
    cout<<"empty or not "<<a.empty()<<endl;

    // first and last element                   .front/back()
    cout<<"first elemnt"<<a.front()<<endl ;
    cout<<"last elemnt"<<a.back()<<endl ;

    return 0 ;
}