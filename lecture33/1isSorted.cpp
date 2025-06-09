//check if an array is sorted using recursion
#include<iostream>
using namespace std ;
bool sorted(int arr[],int n){
    if(n==0 || n==1 ){return true;}
    if(arr[n]<arr[n-1]) {return false;}
    else return sorted(arr,n-1);}
int main (){
    int arr[10]={1,2,3,4,5,69,227,2228,222229,22222210};
    
    if(sorted(arr,9)){cout<<"SORTED";}
    else cout<<"NOT SORTED";
}