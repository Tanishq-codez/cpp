// useless brackets which are not needed

#include <iostream>
#include <stack>
using namespace std;
bool Check(stack<char>,string);
int main()
{
    stack<char> s;
    string str = "(a+b+c)(a+b)";

    if (Check(s,str))
    {
        cout << "present";
    }
    else
        cout << "absent";
}

bool Check(stack<char> s, string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        if (ch == '(' || ch == '+')
            s.push(ch);
        else if (ch == ')')
        {
            int i = 0;
            while (s.top() != '(')
            {
                s.pop();
                i++;
            }
            s.pop();
            if (i == 0)
            {
                return true;
            }
        };
    }
    return false;
}
