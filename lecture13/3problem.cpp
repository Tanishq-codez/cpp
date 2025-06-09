// pivot in an rotated sorted  array 
//pivot:jiske about array rotate hua (minimum element)
#include<iostream>
using namespace std ;
int main (){
    int arr[]={7,9,1,2,3};
    int s = 0 ;
    int e = sizeof(arr)/sizeof(arr[0]) - 1 ;
    int m = s/2 + (e-s)/2 ;
    while(s<e){
        if(arr[m]>=arr[0]){
            s=m+1;}
        else e=m ; 
        m = s/2 + (e-s)/2 ;
    }
    cout << "pivot is " << s ;

}
