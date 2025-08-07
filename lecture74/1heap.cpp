// heap : complete binary tree with heap order property
// complete binary tree : every level is completly fillex except the last level,all levels must be filled from the left
// max heap : parent(i) always larger thann child(2*i and 2*i+1)
// min heap : parent(i/2) always smaller than child

#include <iostream>
#include <utility>

using namespace std;
class heap
{

    int *arr; // statically allocated from next question
    int size = 0;
    int capacity;

public:
    heap(int n)
    {
        size = 0;
        capacity = n;
        arr = new int[n];
    }
    void insert(int value)
    {
        size++;
        int i = size;
        arr[i] = value;
        // Thoda dimaag mein dekhn na kya compare aur swap ho raha
        while (i > 1)
        {
            int parent = i / 2;
            if (arr[parent] > arr[i])
            {
                swap(arr[parent], arr[i]); // MAX HEAP
                i = i / 2;                 // O(logn) where n is the number of nodes bcz the height of
                                           // the binary tree of n nodes ; worst case it need to bubble up logn nodes from bottom to top
            }
            else
                return;
        }
    }
    void del()
    { // root node is deleted replaced by last node
        int i = 1;
        arr[i] = arr[size];
        size--;
        // take root node to its correct position
        while (i < size) // loop continues as long as there are children to compare
                         // ** think digramatically **
        {
            int left = 2 * i;
            int right = 2 * i + 1;
            if (left <= size && arr[i] < arr[left])
            {
                swap(arr[i], arr[left]);
                i = left;
            }
            else if (right <= size && arr[i] < arr[right])
            {
                swap(arr[i], arr[right]);
                i = right;
            }
            else
                return; // sabh kuch ho gaya
        }
    }
    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
    }
};
int main()
{
    heap h(100);
    h.insert(6);
    h.insert(7);
    h.insert(1);
    h.insert(2);
    h.insert(12);
    h.print();
    return 0;
}