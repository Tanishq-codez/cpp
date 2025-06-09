// segregate 0 & 1
#include<iostream>
#include<algorithm>
using namespace std ;
int main (){
   int arr[]= {1,1,1,1,0,0,0,0,1,1,1,0,1,1,1,0,0};
   int size = sizeof(arr)/sizeof(arr[0]);
   // one solution can be sumation of array to count the numbers of 1
   //next is sort
   //other is swap (2 pointers)
   int i = 0 ;
   int j = size - 1 ;
   while(i<j){
    if (arr [i] == 1) {i++;
        continue;}
    if (arr[j] ==0) {j-- ;
        continue;}
    swap(arr[i],arr[j]) ;
    i++;
    j--;
   }
// printing the array 
 for(int i = 0 ; i < size ; i++)
    cout<<arr[i]<<" ";

    return 0 ;
}