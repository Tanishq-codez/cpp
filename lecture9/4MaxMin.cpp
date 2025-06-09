#include <bits/stdc++.h> // <iostream>
using namespace std;

void printarray(int arr[], int x)
{ // ****array ka size  not defined****
    for (int i = 0; i < x; i++)
    {
        cout << arr[i] << " " ;
    }
}

int max_val(int arr[], int x)
{

    int maxi = INT_MIN;
    // int n = sizeof(arr)/sizeof(int);
    for (int i = 0; i < x; i++)
    {
        // same kaam  int maxi = max(arr[i],maxi);
        if (arr[i] > maxi)
            maxi = arr[i];
    }
    return maxi;
}
int main(void)
{
    int size;
    cin >> size;

    int ch[100];

    // taking input
    for (int i = 0; i < size; i++)
    {
        cin >> ch[i];
    }

    int max = max_val(ch, size);

    printarray(ch, size);

    cout << endl
         << max;

    return 0;
}