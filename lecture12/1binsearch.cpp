//basically 2 pointers one for start other for end
#include <bits/stdc++.h>
using namespace std ;
int binsrch(int arr[] , int size , int key ){
    int start = 0 ;
    int end = size-1 ;
    while (start<=end){
        int mid = (start+end)/2 ; //     optimization   mid =  s + (e-s)/2;
        if (arr[mid]==key){return mid;}
        else if (arr [mid]<key){start= mid + 1;
         }
        else if  (arr[mid]>key) {end = mid - 1;}
    }
    return -1 ;
}
int main (void){

    int arrinc [10]={1,2,3,4,5,6,7,8,9,10};
    int arrdec [9]={1,2,3,4,5,6,7,8,9};
    // int size = sizeof(arrdec)/sizeof(int);
    // cout<<size ;
    int n ;
    cout << "enter the key";
    cin >> n ;
     
    int even = binsrch(arrinc,10,n);
    int odd = binsrch(arrdec,9,n);

    cout << even << endl << odd ;
    
return 0 ;}





