// arr of boards
// k painter
// 1 unit board paint - 1 unit time
// can only paint continous array
// find min time to paint entire array

// agar minimum time lagana hai toh max of all must be minimized
// same queston as last one

// aprroach - minimization of seaarch case

#include <iostream>
#include <algorithm>
using namespace std;

bool isPossible(int mid, int *arr, int k, int size)
{
    int parts = 0;
    int painter = 1;
    for (int i = 0; i < size; i++)
    {
        if (parts + arr[i] <= mid)
        {
            if (arr[i] > mid)
                return false; // Add this check at the start of isPossible
            parts += arr[i];
        }
        else
        {
            painter++;
            if (painter > k)
                return false;
            parts = arr[i];
        }
    }
    return true;
}

int minTime(int *arr, int k, int sum, int size)
{
    int s = *max_element(arr, arr + size);
    int e = sum;
    int ans = -1;
    while (s <= e)
    {
        // int mid = s - (s - e) / 2;
        int mid = s + (e - s) / 2;
        if (isPossible(mid, arr, k, size)) // aur chota krke dekhlo
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int arr[6] = {10, 20, 20, 30, 40, 50000};
    int k;
    cout << "enter the number of painters";
    cin >> k;  // no of painters
    int n = 6; // no of partitions

    int sum = 0, i = 0;
    while (i < n)
    {
        sum += arr[i];
        i++;
    }

    if (n < k)
    {
        cout << "painters can be more than partitions";
    }
    else
    {
        int time = minTime(arr, k, sum, n);

        if (time == -1)
            cout << " not possible";
        else
            cout << "min time to paint = " << time;
    }
}
