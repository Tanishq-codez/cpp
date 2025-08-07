// segregate 2 0 1 from array
//  dutch national flag algo
#include <iostream>
#include <array>
using namespace std;
// i is where 0 will be inserted
// k is wheer 2 will be inserted
// j will traverse the array
void sort(int *arr)
{
    int i = 0, j = 0, k = 9;
    while (j <= k)
    {                    // so whats happening is in the following order
        if (arr[j] == 2) // if j encounters 2 it swap
        {                // but doesnot move froward as it does not know it just replaced a 2 with a 2
            swap(arr[k], arr[j]);
            k--;
        }

        if (arr[j] == 1) // it only moves forward when its a 1
            j++;

        if (arr[j] == 0) // or when its a zero ; it swap it with i
                         // with this we know that there is no 2 left behind j ;
                         // so if for i we know that it will always pass through 0 or 1
        {
            swap(arr[i], arr[j]);
            i++;
            j++;
        }

        if (arr[j] == 1)
            j++;
    }
}

// j apne peeche koi 2 nahi chodega ; 0 aur 1 sort kar dega
// i ke peeche sab zero || i aur j ke beech mein sab 1 || j aur k unsorted ||  aur k ke aage sirf 2 honge
void print(int *arr)
{
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i];
    }
}
int main()
{
    array<int, 10> arr;

    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    sort(arr.data()); // that how you pass stl array and vector

    print(arr.data()); // unlike c style array
}