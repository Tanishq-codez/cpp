// in a binary tree the leaf nodes span from (n/2)+1 to n
// leaf node is heap by default
// so process only from (n/2)->1

// heapify : array -> heap
// based on recurrsion

#include <iostream>
#include <utility>

using namespace std;

void heapify(int arr[], int n, int i) // O(n) on build heap from array  how ?
{                                     // O(logn)on single node same reason as insert in heap
   int largest = i;
   int left = 2 * i;
   int right = 2 * i + 1;

   if (left < n && arr[largest] < arr[left])
   {
      largest = left;
   }
   if (right < n && arr[largest] < arr[right])
   {
      largest = right;
   }
   if (largest != i)
   {
      swap(arr[largest], arr[i]);
      heapify(arr, n, largest);
   }
}

int main()
{

   int arr[6] = {-1, 54, 53, 55, 52, 50};
   int n = 5;

   // this is buildheap fnx ;
   for (int i = n / 2; i > 0; i--) // calling from mid to start
   {
      heapify(arr, n, i);
   }

   for (int i = 1; i <= n; i++)
   {
      cout << arr[i] << " ";
   }
   return 0;
}