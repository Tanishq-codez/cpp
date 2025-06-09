// fxn to print array 
#include<bits/stdc++.h>   // <iostream>
#include<cmath>
using namespace std ;

void printarray (int arr[],int x  ){    //array ka size  not defined
    for (int i = 0; i<x; i++){
        cout<<arr[i]<<" ";
    }
           
}

int main (void)
{    int first [10]={1,1,2,3,4,52,1,3,9,29};
    int size = sizeof(first)/sizeof(int);
    cout << size<<endl;


   printarray(first, size);
    
    return 0 ;
}