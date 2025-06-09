//return true if the occurence of each element is unique
// count store - sort - occurece unique ?

#include <iostream>
using namespace std;

bool myfunc(int a[]) {
    for (int i = 1; i <= 2001; i++) {
        if (a[i] && a[i] == a[i - 1]) {
            return false; // If consecutive frequencies are the same
        }
    }
    return true; // All frequencies are unique
}

int main() {
    int arr[] = {2, 1, 1, 4, 4, 4, 5, 5, 5, 5}; // Input array
    int a[2001] = {0}; // Array to store frequencies, initialized to 0

    // Count occurrences of each element
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++) {
        a[arr[i] + 1000]++; // Adjust index for handling negative numbers
    }

    // Sort the frequencies
    for (int i = 0; i < 2001; i++) {
        for (int j = i + 1; j < 2001; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // Check for unique frequencies
    if (myfunc(a)) {
        cout << "true" << endl; // Unique frequencies
    } else {
        cout << "false" << endl; // Duplicate frequencies found
    }

    return 0;
}
