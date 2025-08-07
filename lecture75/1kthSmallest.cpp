// Kth smallest element in an array without sorting
// nlogk worst case = n*(tc of insertion as well as heapify)
//(n is the total elements * logk is the height of the binary tree)
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int ksmallest(vector<int> &arr, int k)
{
    int s = arr.size();
    priority_queue<int> h;
    int i = 0;
    while (i < k)
    {
        h.push(arr[i]);
        i++;
    }

    while (i < s)
    {
        if (h.top() > arr[i])
        {
            h.pop();
            h.push(arr[i]);
            i++;
        }
    }
    return h.top();
}

int main()
{
    vector<int> arr = {1, 4, 3, 2, 1, 5, 6, 4, 7, 8}; // could also be taken input with a loop
    cout << "enter the value of k";
    int k;
    cin >> k;

    cout << ksmallest(arr, k);
}