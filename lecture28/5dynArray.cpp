// it is not advised to make an array of variable size
// int arr[n] ; stack mein array ban gaya during compile time
// while new arr[n] memory will be allocated at runtime
#include <iostream>
using namespace std;

int getSum(int *arr, int n) // *arr==arr[] (array pass by refernce by default)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;

    // variable size array
    int *arr = new int[n]; // heap takes additional memoty than stack due to pointer

    // fill elements using loop
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // heap memory donot decay with loop
    // while the ptr does
    //  u have to manually delete
    // or program crash if stuck in infinite loop

    cout << getSum(arr, n);

    delete[] arr;

    // hw - a void pointer can store address of any type
    void *ptr = &n;
    // address type casting - for
    int x = 65;
    char *p = (char *)&x; // explicit casting to char for byte-wise operations
}