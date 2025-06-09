#include<iostream>
#include<set>
using namespace std ;
int main (){
    set<int>s;
    //adding elements
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(3);
    s.insert(0);
    s.insert(9);
   
    // har element sirf ek baar print hoga
    for(auto i :s)
    cout<<i<<endl;

    // erasing smallest element 
    s.erase(s.begin());

    for(auto i :s)
    cout<<i<<endl;

    // erase 2nd element

    set<int> :: iterator it = s.begin() ;
    it++;

    s.erase(it);

    for(auto i :s)
    cout<<i<<endl;

    //to check occurence of one particular element
    cout<<s.count(5)<<endl;
    return 0 ;
    
    //to find elemnt iterator

    set<int>::iterator  itr = s.find(9);

    // print element upto 9
    for(auto it = itr ; it!= s.end();it++)
    cout<<*it<<" ";
    cout<< endl ;


}