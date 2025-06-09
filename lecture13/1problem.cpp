//first and last position of an element in an sorted array
#include<iostream>
using namespace std ;
int main (){
    int arr[]={1,2,2,2,3,3,4,4,5,5,6,6,7,7,8,8};
    int s  = 0 ;
    int e = sizeof(arr)/sizeof(arr[0])-1;
    int m = s+(e-s)/2;
    int key , ans=-1, ans2=-1;
    cin >> key ;

    while(s<=e){
        if(arr[m]==key){
            e = m - 1 ;// agar mil gaya toh usse left check karlijiye
            ans = m ;}
        else if (arr[m]>key){ e = m - 1 ;
 }
        else s = m + 1 ;
         
        m = (s + e )/2 ;
    }
     s  = 0 ;
     e = sizeof(arr)/sizeof(arr[0])-1;
     m = (s+e)/2 ;

    while(s<=e){
        if(arr[m]==key){
            s= m + 1 ;// agar mil gaya toh uske right check krlijiye
            ans2 = m ;}
        else if (arr[m]>key){ e = m - 1 ;
 }
        else s = m + 1 ;
         
        m = (s + e )/2 ;
    }

    cout <<"the index of first occurence of "<<key<<" is "<<ans;
    cout <<" and the index of last occurence of "<<key<<" is "<<ans2;
    return 0 ;
}
//number of occurence of an element
//linear search and count O(n)
// one way is find the diff btw last and first occurence O(logn)