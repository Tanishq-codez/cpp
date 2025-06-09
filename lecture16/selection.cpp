//selection sort O(n2) for small size arrays
//compare first element with suceeding elements , swap
#include<iostream>
using namespace std ;
int main(){
    int arr []={23,32,45,54,12,21,67,29,19,98,34,90,23,87,45,30};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i =0;i<n-1;i++){
        int min = i;
    for(int j = i+1 ; j <n ; j++)
     {   
        if(arr[j]<arr[min]){
         min = j;}}
         swap(arr[i],arr[min]);
     }
 for(int k = 0 ; k < n;k++){
  cout<<arr[k]<<" ";
}
}