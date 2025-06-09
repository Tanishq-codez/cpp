#include<iostream>
using namespace std ;
int sum (int arr[], int n )
// we are actually passing the pointer not array
{
    int sum = 0 ;
    for ( int i = 0 ; i <n ; i++){
        sum+= arr[i];
    }
    return sum ;
}
int main (){
// so u can pass a pointer of a block from in btw the array

int arr[100] ={1,1,1,1,1,2,2,2,2,2};
cout<<sum(arr+5,10);
}