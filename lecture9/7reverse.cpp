// start end exchnage krte jao bass
#include<bits/stdc++.h>             
using namespace std ;

void reverse (int arr[],int x){
    for(int i = 0 ,j =x-1; i<j ;i++,j--){
        // arr[i]=arr[i]+arr[j];
        // arr[j]=arr[i]-arr[j];
        // arr[i]=arr[i]-arr[j];
        swap(arr[i],arr[j]);
    }
    for(int k=0;k<x;k++){
        cout<<arr[k];
    }
    cout << endl;

}
int main (void)
{     
    int arr1[6]={1,2,3,5,4,5};
    int arr2[5]={2,3,4,7,5};

    reverse(arr1,6);
    reverse(arr2,5);




    
    return 0 ;
}