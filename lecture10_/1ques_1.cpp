//q:swap alternate elements in an array 
#include<bits/stdc++.h>             
using namespace std ;
void altswap(int arr[],int x){
     
     for(int i =0 , j=1; i<x ; i+=2,j+=2){
        if(i==(x-1))break;
     swap(arr[i],arr[j]);
     

     }
}
int main (void)
{
    int arr1[9]={1,2,3,4,5,6,7,8,9};
    altswap(arr1,9);

    for(int i = 0 ; i<9 ; i++){
        cout << arr1[i]<<endl ;
    }
    return 0 ;
}