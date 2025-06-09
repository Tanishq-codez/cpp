#include<bits/stdc++.h>             
                            
using namespace std ;

bool find (int arr[], int x , int n){
    for (int i = 0 ; i<x ; i++){
      
        if (  arr[i]==n ){return 1 ;}
       
    } return 0 ;
}
int main (void)
{   int arr1[10] =  {1 , 2, 3, 4 ,5 , 6, 7 ,8, 9, 0} ;
    int search ;
    cout << "what to search?";
    cin >> search ;

    bool a = find(arr1,10,search);
    
    if (a)cout<<"yeah its there";
    else  cout<< "hell naah...!" ;
      return 0 ;
    //could also return the index will do that in binary
}