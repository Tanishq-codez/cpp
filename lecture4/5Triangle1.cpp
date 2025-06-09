#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main (void){
    int n;
    cout<< "enter the number of rows"<<endl;
    cin>>n;

    for (int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if (j>=i) cout<<j;
            else cout << " ";   }
            cout<<endl;
    }
    return 0;
}
