#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
int main (){
    
    vector<int> v ;
    v.push_back(2);
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);
    v.push_back(10);
    //finding 5(not present)
    cout<<binary_search(v.begin(),v.end(),5)<<endl;
    // finding 6 (true)
    cout<<binary_search(v.begin(),v.end(),6)<<endl;
    
    // lower_bound(v.begin(), v.end(), x):
    //Finds the first position where x can be inserted in v while maintaining the sorted order.
    cout<<"lower bound"<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl; 
    // upper_bound(v.begin(), v.end(), x):
    //Finds the first position where an element greater than x can be inserted while maintaining the sorted order.
    cout <<"upper bound"<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;
  
    // can  use min max swap fxn 

    string str = "aaabbc";
    // reversing string 
    reverse (str.begin(),str.end());
    cout<< str<<endl;
    
    // rotating 1st  elemnst to last position
    rotate(str.begin(),str.begin()+1,str.end());
    cout<< str;

    //sort 
    sort(v.begin(),v.end());

}