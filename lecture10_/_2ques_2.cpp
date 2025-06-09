// finding unique element in the array of pairs;
#include<bits/stdc++.h>             
                            
using namespace std ;
// number ko khud se XOR^ krdo to zero aayega               a^a = 0
// kisi element ko 0 ke sath  XOR karo to same element      a^0=a
int unique (int arr[], int n ){
    int ans = 0;
    for (int i = 0 ; i<n ;i++){
        ans = ans ^ arr [i];
        }
        return ans ;
    }

int main (void)
{
    int arr1[11] ={1,1,2,2,3,6,4,4,5,5,6} ;

    int ans = unique(arr1,11);
    cout << ans ;
    return 0 ;
}