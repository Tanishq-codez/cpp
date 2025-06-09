//binary search using recursion
#include<iostream>
using namespace std ;
bool search (int arr[],int start ,int end , int n){
  if(start>end)return false;
  int mid = start + (end-start)/2 ;
  if(arr[mid]==n) return true ;
  if(arr[mid]<n) return search(arr,mid+1,end,n);
  if(arr[mid]>n) return search(arr,start,mid-1,n);
  return false;} //important to have a return statement without conditional 
                 // else compiler wont let it run;
int main (){
    int arr[10]= {1,2,3,4,5,6,7,8,9,10};
    int n ;
    cin >> n ;
    
    if(search(arr,0,9,n))cout<<"present sir";
    else cout<<"absent sir"; 
}
//hw-solve lec 12-15 using recursion aggain