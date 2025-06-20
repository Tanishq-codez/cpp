// dynamic progg : overlapping subproblems ; bigger problem sol = many smaller problems sol
// top down approach - recurssion + memoization (store sol of subproblem in table / map)
// bottom up approach - tabulation
// + space optimization
#include <iostream>
using namespace std;
int fibo(int n , int *arr)
{
    if (n==0||n==1) return n ;
    
    arr[n] = fibo(n-1,arr)+fibo(n-2,arr);
}
int main()
{
    int m;
    cout << "enter n";
    cin>>m ;
    int arr[m+1]={-1};
    cout<<fibo(m-1 , arr);

}