#include <iostream>
using namespace std;
int main()
{
    int a = 2;
    int b = 5;
    float f = 5;
    double d = 5;

    cout << a / b << a / f << a / d; // int/int = int
                                     // int /float or double =  float , double

    cout << 0.2 / 5 << '\n'
         << 2 / 5 << endl;

    // relational operator

    int x = 2;
    float y = 2.2;

    bool first = x == y;
    cout << first << endl;

    bool second = x < y;
    cout << second << endl;

    bool third = x > y;
    cout << third << endl;

    // logical opertor && ; || ; !

    int s = 0;
    cout << !s << endl; // negation 0<---->non 0

    // bitwise operator >> discussed later

    return 0;
}