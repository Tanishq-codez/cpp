// tell those elements whichare coming twice

// array len = n , no. belongs to [1,n]**** this would be difficult if there be negative numbers


// bruteforce complexity = O(n^2) , but i need better....!!!!

#include<iostream>
using namespace std ;
int main (){
    int arr []={1,2,4,4,5,7,7,8,10,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int count[size+1]={};
    for(int i = 0 ; i<size;i++ ){
        if(count[arr[i]]!=0){cout<<arr[i]<<" ";}
        else count[arr[i]]=-1 ;

    }
}