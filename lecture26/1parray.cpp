#include<iostream> 
using namespace std ;
//arr is pointer to first memory block of array
int main(){
int arr[10];
cout<<arr;  // int*p = &arr[0]

cout<<*arr; // value in first block

// arr[i] ==  i[arr]  ==  *(arr+i)
// arr = arr + 1 //error (cant reassign loc of an array)
// ptr = ptr + 1 //  :) starts pointing to the nxt memory block
}

 
