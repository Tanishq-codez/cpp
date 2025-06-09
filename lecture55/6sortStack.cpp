// sort elements of a stack in decending order
// no iteration only reccurrsion

#include <iostream>
#include <stack>

using namespace std;

// Function to insert an element in sorted order
void sortedInsert(stack<int>& s, int element) {
    if (s.empty() || s.top() <= element) {
        s.push(element);
        return;
    }
//  *****MAIN******
    int temp = s.top();
    s.pop();
    sortedInsert(s, element);
    s.push(temp);
}

// Recursive function to sort the stack
void sortStack(stack<int>& s) {
    if (s.empty()) return;

    int temp = s.top();
    s.pop();
    sortStack(s);
    sortedInsert(s, temp);
}

int main() {
    stack<int> s;
    cout << "Enter 10 elements:\n";
    for (int i = 0; i < 10; i++) {
        int a;
        cin >> a;
        s.push(a);
    }

    sortStack(s);

    cout << "Sorted stack in descending order:\n";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}