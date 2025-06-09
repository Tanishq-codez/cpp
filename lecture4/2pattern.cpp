#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter number of rows";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {   int count = i;
        for (int j = 0; j < i; j++)
        {cout<<count ;
          count++ ;
        }
    cout<<endl;
    }

    return 0;
}