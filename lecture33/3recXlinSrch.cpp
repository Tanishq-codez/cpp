#include<iostream>
using namespace std ;
bool search(int arr[],int size,int n)
{   if(size<0) return false;
    if(arr[size]==n) return true;
    else return search(arr,size-1,n);} //use "return"****
int main (){
    int arr[10]= {1,2,3,4,5,10,6,7,8,9};
    int n ;
    cin >> n ;
    
    if(search(arr,9,n))cout<<"present sir";
    else cout<<"absent sir";

}