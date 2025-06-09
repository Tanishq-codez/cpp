// string reversal using stack
// automatic by stack FILO

#include <iostream>
#include <stack>
#include<string>
using namespace std;
int main()
{
    stack<char> s;
    
    string str ;
    cout<<"enter the string to reverse";
    getline(cin,str); // doesnot stop at whitespaces lin std::cin 

    for ( int i= 0 ; i<str.length() ; i++)
    {
        char ch = str[i];
        s.push(ch);
}
    while(!s.empty()){
     cout << s.top();
     s.pop();
    }

    return 0 ;

}