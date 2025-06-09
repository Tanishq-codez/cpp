// kinda tower of hanoi approach
// split the stack into top and rest
// reccursion will bring reverse of rest 4
// just insert the top at bottom
#include <iostream>
#include <stack>
using namespace std;

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

void rev(stack<int> &s)
{   if(s.empty())return ;
    int a = s.top();
    s.pop();
    rev(s);
    insertbott(s,a);
}

void display(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
}
int main()
{
    stack<int> s;
    s.push(9);
    s.push(10);
    s.push(11);
    s.push(12);
    s.push(13);
    s.push(15);

    stack<int> a = s ;

    display(a);

    rev(s);

    display(s);
}
