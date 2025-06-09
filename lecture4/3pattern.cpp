#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cout << "enter num of rows";
    cin  >> n ;
    for(int i=1 ; i<=n; i++){
        for(int j=1 ; j<=i; j++){
         char c = 'A'+i+j-2;
         cout<<c;
        }
        cout<<endl;
 }
     return 0 ;
}