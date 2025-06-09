#include<bits/stdc++.h>   // <iostream>
#include<cmath>
using namespace std ;
int main (void)
{   int array[10]={1};  // 1 is first element rest zero
    int x = array[2];
    cout << x << endl ;
    int arr[10];   // all elements garbage value 
    int y = arr[4];
    cout << y << endl;
    int num ;
    cout << "enter the number you need"<< endl ;
    cin >> num ;

    // SAME ELEMENT AT EACH PLACE IN ARRAY
    int ar[10];
    for (int i = 0 ; i<=9 ;i++){
          ar[i]=num;
    }
   // cout << ar ;       NOT ALLOWED
   //printing of array
   for(int j = 0 ; j<=9 ; j ++ ){
         cout << ar [j]<<" ";
   }


    
    return 0 ;
}