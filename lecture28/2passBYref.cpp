#include <iostream>
using namespace std;
// pass the reference variable
// no new memory allocated just a new name
void update(int &x)
{
    x++;
}
int main()
{

    int n = 5;
    update(n);
    cout << n;
}