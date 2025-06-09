// insert element at the bottom
#include<iostream>
#include<stack>

using namespace std ;

void insertbott(stack<int> &s , int a){
    if(s.empty()){
        s.push(a);
        return ;
    }
    int x = s.top();
        s.pop();
    insertbott(s,a);
        s.push(x);
}
 void display(stack<int>s ){
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
 }
int main (){
    stack<int> s ;
    s.push(10);
    s.push(11);
    s.push(12);
    s.push(13);
    s.push(14);

    insertbott(s,9);

    display(s);
    // last question using iterative approach instead of recurssive 
    // avoiding destructive printing (using reccursion 
}
