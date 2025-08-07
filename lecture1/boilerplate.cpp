// M_PI = FLOAT VALUE OF PI - already INCLUDED IN <cmath>
// INT_MAX INT_MIN   <climits>
//  **********take care of negative inputs************
//  take care that output/any variable at any point shall not be outside int range
//  <bits/stdc++.h>  ****use sort array(a,l) and many stl directly****
// for hw/difficult ques try first alwaysthen ask copilot for more optimised solution + other approches***
// strlen() == <cstring>
// swap     == <utility>
// all .h headers in c are c_ headers in cpp

// cpp is statically typed while js and py are dynamically typed:mean any variable initalized with int can also store string
#include <iostream>

using namespace std;
int main(void)
{
    // to swap 2 numbers
    int a, b;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    // to include "" in cout statement use \"
    cout << "hello friend \"how are you my\" friend";
    return 0;
}