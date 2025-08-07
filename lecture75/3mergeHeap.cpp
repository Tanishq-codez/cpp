// merge 2 max heap
//  basically merge vector and build heap from it
// similar to some binary tree question
#include <bits/stdc++.h>
using namespace std;
// User function Template for C++

class Solution
{
public:
    void heapify(vector<int> &c, int s, int i)
    {

        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < s && c[left] > c[largest])
        {
            largest = left;
        }
        if (right < s && c[right] > c[largest])
        {
            largest = right;
        }

        if (largest != i)
        {
            swap(c[largest], c[i]);
            heapify(c, s, largest);
        }
    }
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m)
    {
        vector<int> c;
        // alternate of loop to push elements in a vector
        // range based loops
        // auto i ; dont need data type
        for (auto i : a) // i is the each element (whose type is detected by auto
        )  and a is the container we are iterating over
            c.push_back(i);

        for (auto i : b)
            c.push_back(i);

        int s = c.size();

        for (int i = (s - 1) / 2; i >= 0; i--)
        {
            heapify(c, s, i);
        }

        return c;
    }
};