// edge cases are those inputs that will cause error in the general code therefore shall be handled explicitly
//  arr[pages in books]
//  m students
//  conds - allocate all books
//          atleast 1 book each student
//          distribute in order
//  task - "max (no of pages assigned to a student) is as min as possible"

// done by minimization of search space like square root ques done before

#include <iostream>
using namespace std;
bool isPossible(int *arr, int n, int m, int mid)
{
    int stuCount = 1;
    int pages = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mid)
            return false; // Add this check at the start of isPossible
        if (pages + arr[i] <= mid)
            pages += arr[i];
        else
        {
            stuCount++;
            if (stuCount > m || arr[i] > mid)
                return false;
            pages = arr[i];
        }
    }
    return true;
}
int bookAlloc(int m, int n, int *arr)
{
    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (isPossible(arr, n, m, mid))
        {
            ans = mid; // agar possible sol hai to right part mein ja
            e = mid - 1;
        }
        else
            s = mid + 1; // agr nahi hai possible to left mein chala ja
    }
    return ans;
}
int main()
{
    int arr[8] = {10, 20, 20, 30, 40, 50, 60, 70};
    int m; // no of students
    cout << "enter the number of students";
    cin >> m;
    int n = 8; // no of books
               // Add validation
    if (m > n)
    {
        cout << "Cannot allocate books: More students than books!" << endl;
        return -1;
    }
    if (m <= 0)
    {
        cout << "Number of students must be positive!" << endl;
        return -1;
    }

    int result = bookAlloc(m, n, arr);

    if (result == -1)
    {
        cout << "No valid allocation possible!" << endl;
    }
    else
    {
        cout << "Minimum possible maximum pages: " << result << endl;
    }

    return 0;
}