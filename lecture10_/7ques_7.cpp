// pair sum =  n

#include<iostream>
using namespace std ;
int main (){
    int n;
    cout<<"enter the required number";
    cin>>n ;

    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,1314,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i =0;i<n;i++){
         for(int j = i+1;j<n;j++)  {
            if(arr[i]+arr[j]==n)cout<<arr[i]<<","<<arr[j]<<endl;
         }
    }
// for inc. pairs sort the array first 
}