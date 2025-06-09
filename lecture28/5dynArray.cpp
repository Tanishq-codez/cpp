// it is not advised to make an array of variable size
#include<iostream>
using namespace std ;
int main (){
    int n ;
    cin>>n;

    // variable size array
    int *arr=new int[n]; //heap takes additional memoty than stack due to pointer

    //fill elements using loop
    for (int i=0;i<n;i++){
        cin>>arr[i];  
    }
    
    //heap memory donot decay with loop
    // u have to manually delete

    delete []arr ;
 
    // a void pointer can store address of any type

    void *ptr = &n;

}