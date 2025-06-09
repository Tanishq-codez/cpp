// reverse an array : use 2 pointers 
// from start and end and keep exchanging

//merge sorted array into a sorted array
#include<iostream>
using namespace std;

int main (){
    int arr1[]={1,3,5,7,9};
    int arr2[]={2,4,6,8,10};
    
    int size = sizeof(arr1)/sizeof(arr1[0])+sizeof(arr2)/sizeof(arr2[0]);
    int arr3[size]={0};
    int i=0,j=0,k=0;
    while(k<size){
        if(arr1[i]<=arr2[j])
        arr3[k++]=arr1[i++];
            
        else 
        arr3[k++]=arr2[j++];
        
    }
    for(int i = 0 ; i < size ; i++)
{
    cout << arr3[i] << " ";
}

    return 0;
}