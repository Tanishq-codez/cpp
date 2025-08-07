// so each block of array (n length) is a stall ;
// so the element in the block is the stall  number
// no of cows = k
// allocate the stalls such that the minimum distance btw 2 cows is maximised
// BINARY SEARCH PATTERN : agar ek path har round mein neglect kr sakte ho >> basically minimize search space 
#include <iostream>
#include <array>
#include <algorithm>
using namespace std;
int aggrCows(array<int, 5> arr, int k, int n)
{ int s = arr[0];
  int e = arr [n-1];
  while(s<=e)
  {
    int mid = s + (e-s)/2;

  }
}
int main()
{
    const int n = 5; // to give it to array size use const int 
    array<int, n> arr = {4, 5, 3, 1, 2};
    cout << "number of cows";
    int k;
    cin >> k;
    sort(arr.begin(), arr.end());
    int max = aggrCows(arr, k, n);
}