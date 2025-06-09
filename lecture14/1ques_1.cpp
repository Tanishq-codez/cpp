//search in an rotated sorted(inc) array
#include<iostream>
using namespace std ;
int findpivot(int arr[]){
    int size = sizeof(arr)/sizeof(arr[0]);
    int s = 0;
    int e = size - 1 ;
    int m = s+(e-s)/2;
    if (arr[m]<arr[0]){
        
    }
        

}
int main (){
    int arr[]={6,7,8,9,10,1,2,3,4,5};
    int n ;
    cout<<"enter the number to search";
    cin>>  n ;
    int pivot = findpivot(arr);



}