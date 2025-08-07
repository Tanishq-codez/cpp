// in bubble we focus on small bubbles of 2 elements
// i th round mein ith largest element apni jagah pe hoga hi hoga
// bubble sort O(n2) worst case
// adjacent elements compare krte jao
#include <iostream>
using namespace std;
void printarray(int arr[], int x)
{ // array ka size  not defined
    for (int i = 0; i < x; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    bool swapp = true; // optimization reduces best case complx from n2 to n
    int arr[] = {1, 2, 3, 4, 5, 9, 8, 7, 6, 'a', 'b', 'd', 'c'};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = size - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            swapp = true;
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapp = false;
            }
        }
        if (swapp)
        {
            break;
        }
    }
    printarray(arr, size);
}
// bubble sort is stable or unstable algorithm?
// ans) stable (relative position of equal elements will be same after sorting)
// ex: before sort {2,1,4,3*,3} ---> after sort {1,2,3*,3,4}
// since 3*==3 bubble sort will not swap them