//Last in first out 
// using stl 
#include<iostream>
#include<stack>
using namespace std ;
int main (){
    // creation using stl 
    stack<int> st ;

    // insert element 
    st.push(2);
    st.push(29);

    // removing element top only possible
    st.pop();

    // top element 
    cout<<st.top()<<endl;

    // empty or not return bool
    if(st.empty()) cout << "empty";
    else cout << "not empty";

    //size
    cout<< st.size();

}
