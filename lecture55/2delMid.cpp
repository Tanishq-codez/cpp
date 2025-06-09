#include <iostream>
#include <stack>
using namespace std;
void delMid(stack<int> &st, int n, int i)
{
    if (i == n / 2)
    {
        st.pop();
        return;
    }
    int a = st.top();
    st.pop();
    delMid(st, n, i + 1);
    st.push(a);
}
int main()
{
    stack<int> s;
    s.push(10);
    s.push(11);
    s.push(12);
    s.push(13);
    s.push(14);
    s.push(14);
    s.push(15);
    s.push(15);
    s.push(11);

    delMid(s, s.size(), 0);

    // ***destructive printing***
    cout << "Stack after deleting middle:\n";
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop(); 
    }
}