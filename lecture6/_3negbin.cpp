// #include <bits/stdc++.h> // <iostream>
// #include <cmath>
// using namespace std;
// int main(void)
// {
//     int n;
//     cout << "enter n ";
//     cin >> n;
//     int place = 1;
//     int bin = 0;
//     if (n < 0)
//     {
//         n = -n;
//     }
//     int rem ;
//     //taking 1s complement
//     while (n != 0)
//     {   
//         int digit = n & 1 ;
//         if(digit==1){digit=0;}
//         else digit = 1 ;
//         bin = bin + place*digit;
//         place = place * 10 ; 
//          n = n >> 1 ;
//     }

//     // making it 2s complement
//     cout << bin+1;
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int n, bits;
    cout << "Enter a negative number: ";
    cin >> n;
    cout << "Enter the number of bits: ";
    cin >> bits;

    if (n >= 0) {
        cout << "The number is not negative. Please enter a negative number." << endl;
        return 0;
    }

    n = -n; // Convert to positive for processing
    int binary[32] = {0}; // Array to store binary digits (maximum 32 bits)

    // Calculate the binary representation of the positive number
    for (int i = bits - 1; i >= 0; i--) {
        binary[i] = n % 2;
        n /= 2;
    }

    // Take One's Complement
    for (int i = 0; i < bits; i++) {
        if (binary[i] == 1) {
            binary[i] = 0;
        } else {
            binary[i] = 1;
        }
    }

    // Add 1 to get Two's Complement***********
    for (int i = bits - 1; i >= 0; i--) {
        if (binary[i] == 0) {
            binary[i] = 1;
            break;
        } else {
            binary[i] = 0;
        }
    }

    // Print the binary representation
    cout << "Binary representation in Two's Complement: ";
    for (int i = 0; i < bits; i++) {
        cout << binary[i];
    }
    cout << endl;

    return 0;
}
