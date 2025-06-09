#include<iostream>
#include<vector>
using namespace std ;
int main (){
    // vector is dynamic array
    // if you try to add more than prescribed element
    //the vector will create new vector of double size and dump old vector
   
    // creating vector of name "v"
   vector<int>v ;
   
   //intial size is 0                       .capacity()!=.size
   cout <<"size" << v.capacity()<<endl;

   // input 5                                .push_back()
    v.push_back(5);

   // now size is 1  , cpacity is 1         
   cout <<"capacity" << v.capacity()<<endl;

   //input 2nd elemnet
    v.push_back(6);

    // now size is 2 , cpacity inc to 2

    //input 3rd element 
    v.push_back(7);

    // ***NOW CAPACITY IS 4 while size is 3 ***           .capacity()!=.size()
    cout <<"capcity" << v.capacity()<<endl;
    cout<<"size"<<v.size()<<endl;

    // can use front , back like array

    // remove elemnet at last                             .pop_back()
    v.pop_back();

    // print vector
    for(int i : v)
    cout<<i<<" ";

    //size=0 (saaf), capcity remain                       .clear()
    v.clear();

    // ?access iterator *it of first element              .begin()
     v.begin();

    // another way to initialize
    vector<int> vec(5,1);

    // total 5  elements all 1 , default 0

    // you can diectly use assignmnet operato*******
    v = vec ;

    // same with stl array if same size else use

    //copy during initialization
    vector<int> vec2(vec);




}