//triplet with given sum
#include<iostream>
using namespace std ;
int main (){
    int n ;
    cout << "enter the sum of the triplet ";
    cin >> n ;

    int arr[100];
    // creating the array 
    for(int i = 0 ; i <100 ; i++){
        arr[i]= i ;
    }
    // 3 loops 
    for(int i = 0 ; i<100;i++){
        for(int j = i+1 ; j<100 ;j++){
            for(int k = j+1 ; k<100 ; k++)
            {if(arr[i]+arr[j]+arr[k]==n)
                cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
            }
        }
    }
}
