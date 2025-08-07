// find the min cost to join a rope ; cost of each join is equal to the total resulting length of the rope
// space complexity : O(nlogn)
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minCost(vector<int> &arr)
    {
        // code here
        priority_queue<int, vector<int>, greater<int>> q;
        int s = arr.size();

        for (auto i : arr)
        {
            q.push(i);
        }
        int ans = 0;
        while (q.size() > 1)
        {
            int a = q.top();
            q.pop();
            int b = q.top();
            q.pop();
            int c = a + b;
            ans = c + ans;
            q.push(c);
        }

        return ans;
    }
};