// balanced parenthesis are those which you see in equations
#include <iostream>
#include <stack>
#include <string>
#include<cstdlib>

using namespace std;
bool match(char a , char b ){
   if(a=='{' && b=='}') return true;
   else return false ;
}
void isBalance(string str)
{ stack<char> s;
    for (int i = 0; i < str.length(); i++)
    { if (str[i]=='(' || str[i]=='{' || str[i]=='[')
         s.push(str[i]);
      else {
        
        if (!s.empty()){
        if(match(s.top(),str[i]))
         s.pop();
        else {
            cout<<"not balanced";
            exit(EXIT_FAILURE) ;
        }
    
        }
      }
    }}
    int main()
{
    string str;
    str = "{{}}{}}{{}}}}";
    isBalance(str);
    cout<<"balanced" ;
}
