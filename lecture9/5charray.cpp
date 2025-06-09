#include<bits/stdc++.h>             
                            
using namespace std ;
int main (void)
{   
    char arr1[10] ;
    for (int i = 0 ; i<10 ; i++){
        cin >> arr1[i];
    }

    for(int j = 0 ; j<10 ; j++){
        cout << arr1[j] ;
    }

    if ('a'>'b'){cout << 'a';}
    else cout << 'b';

    
    return 0 ;
}