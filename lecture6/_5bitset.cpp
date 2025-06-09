#include<iostream>
#include<bitset>  // to get binary representation
using namespace std;
int main (){
    int n;
    cout << "Enter n: ";
    cin >> n;

    // Use 8-bit binary representation (adjust as needed)
    const int BITS = 8;

    if (n >= 0) {
        // Positive number: directly convert to binary
        cout << "Binary representation: " << bitset<BITS>(n) << endl;
    } else {
        // Negative number: compute Two's Complement
        cout << "Two's Complement binary: " << bitset<BITS>(n) << endl;
    }

    return 0;
}