#include <iostream>
using namespace std;
int main()
{
    int i = 5;

    int &j = i; // j is reference variable
    // ref variable is another name to same memory block
    i++;
    j++;
    cout << i << " " << j;
}