//peak in a mountain array
#include<iostream>
using namespace std ;
int main (){
    int arr[]= {1,2,3,4,5,6,7,8,9,10,5,4,3,2,1};
    int s =0 , e=18, m=9, ans= -1;
    while (s<=e){
        if(arr[m]>arr[m+1] && arr[m]>arr[m-1]){
            ans = m ;
        break ;}
            else if (arr[m-1]<arr[m] ){
                 s=m+1 ;}

            else if ( arr[m]>arr[m+1])
// to include boderline case in which mid is the answer 
// e=m instead of e = m-1 || s=m insted of s = m+1 
              e=m ; 
            m = (s+e)/2;};
   cout<<"the peak element is at index "<<ans;
   return 0 ;
}