#include<iostream>
#include<stack>

using namespace std ;

int main (){
    // shaadi ki plate , last in = first out
    stack<string>s;
    s.push("tanishq");
    s.push("kumar");
    s.push("chhabra");
    cout<<"top element"<<s.top()<<endl;
    // removing top elemnt
    s.pop();
    cout<<"top element"<<s.top()<<endl;

    //size , empty
}
