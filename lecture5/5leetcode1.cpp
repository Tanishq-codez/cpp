//sum and product of digits
#include <bits/stdc++.h> // <iostream>
#include <cmath>
using namespace std;
int main(void)
{
    int n;
    cout << " enter the value of n ";
    cin >> n;
    int l, s = 0, p = 1;

    while (n!= 0)
    {
        l = n % 10;
        s = s + l;
        p = p * l;
        n = n / 10;
    }
    cout << "the sum is " << s << " and the product is " << p;

    return 0;
}
