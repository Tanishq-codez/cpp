// insertion sort : adaptable ? and stable algo
// adaptable algo : means perform better on partially sorted arrays (best case complexity is O(n))
// stable algo : means that when 2 elements are equal there order is preserved (same in input and output array)
// cards example : pehle card ke aage peeche insert karte raho
// pehle elment ko sort manlo
// 2nd se ek ek krke uthao aur usse pichle element se compare karke insert kardo
// O(n2) time complexity

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4, 3, 6, 6, 8, 43, 75, 9, 67, 23, 45};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Insertion Sort using `for` loops
    for (int i = 1; i < size; i++) // jis element ko left walon se compare krna hai
    {
        int temp = arr[i]; // Store the current element
        int j;             // Declare outside loop to access it after

        for (j = i - 1; j >= 0 && arr[j] > temp; j--) // for loop ki saari break condition (isme hi daal diya kr)
        {                                             // loop ulta chl raha from total elements jo abhi tak i hain hai jab tak elemnts isse badde hain
            arr[j + 1] = arr[j];                      // Shift larger elements to the right
        }
        // j shift hokar j-- ho gaya;

        // Place temp in its correct position
        arr[j + 1] = temp;
    }

    // Print the sorted array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}