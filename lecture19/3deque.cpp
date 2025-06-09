//pronounced as deck
#include<iostream>
#include<deque>
using namespace std ;
int main (){ 
    //dynamic ; elemnet can be inserted and removed from both sides
    //initialization
    deque<int> d ;
  
    // taking input            .push_front
    d.push_back(1);
    d.push_front (2);

    //printing             
    for(int i : d){
        cout<<i<<" ";
    }

    //removing 1st element     .pop_front
    d.pop_front();
    for(int i:d){
        cout<<endl<<i<<" "<<endl;
    }
    
    // removing last element
    d.pop_back();
    for(int i:d)
    cout<<i<<" "<<endl;

    // to access a particular element 
    cout<<"print element at 1st index"<<d.at(1);
    
    //u can use d.front , d.back , d.empty ,d.begin ,d.end
    
    //to delete any element , here 1st
    d.erase(d.begin(),d.begin() +1 );

    //size , capacity ??
    
    
    
    return 0 ; 
}