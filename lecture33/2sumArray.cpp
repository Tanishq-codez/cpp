//sum of elements of array with recursion
#include<iostream>
using namespace std;
int summation(int arr[],int n){
    if(n<0){return 0;}
    int sum =arr[n]+summation(arr,n-1);
    return sum;
}

int main (){
    int arr[10]={10,10,10,10,10,10,10,10,10,10};
    int ans = summation(arr,9);
    cout<<ans ;}