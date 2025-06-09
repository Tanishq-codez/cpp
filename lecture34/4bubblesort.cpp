//bubble sort ith loop round-->ith largest element fix
//elements last se fix hona shuru hoga
#include<iostream>
using namespace std ;
void sort(int arr[],int s){
    if(s==0 || s==1) return ;
    
    // rec mein loops XD
    // last element sorted on each call
    for(int i = 0 ; i<s-1 ; i++)
    {if(arr[i]>arr[i+1])swap(arr[i],arr[i+1]);}
    return sort(arr,s-1);
}
int main (){
    int arr[]={1,3,4,2,6,5,7,8,9,55,74,34,67};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr,size); 
    //original array bhi sort hua sirf inside fnc nahi
    for(int i = 0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }}
    //hw-selection sort , insertion sort