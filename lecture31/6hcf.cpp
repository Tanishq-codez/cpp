//  EUCLIDEAN ALGO
#include<iostream>
using namespace std;

// Correct recursive function for GCD
int gcd(int a, int b) {
    if (b == 0)  // Base case
        return a;
    return gcd(b, a % b);  // Recursive case using Euclidean Algorithm
}

int main() {
    cout << "GCD of 4 and 3 is " << gcd(4, 3) << endl;
    return 0;
}