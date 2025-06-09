// replace the element with the first element on the right / otherwise -1
#include <iostream>
#include<stack>
using namespace std;
void nxtSmallr(stack<int>&s ) // why couldnt i --> &arr
{ 
    int a = s.top();
    s.pop();
    if (s.top()<a)a = s.top();
    else nxtSmallr(s) ;

}

int main()
{
    int arr[10] = {1, 2, 2, 3, 1, 7, 1, 9, 1, 10};
    stack<int>s;
    s.push(-1);
    for (int i = 8; i >= 0; i--)
    {
        int a = arr[i];
        s.push(a);
    }
    nxtSmallr(s);
}