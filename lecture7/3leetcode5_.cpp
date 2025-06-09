//power of 2 
#include<iostream>
using namespace std;
int main(void)
{
    int n;
    cout << "enter value of n ";
    cin >> n;
    if(n==0){
        cout<<"false";
        return 0 ;
    }
    if(n==1){
        cout<<"0";
     return 0 ;}
    int i = 0;

    while (1)
    {   int rem = n % 2 ;
        n = n / 2;
        i++;

        if (rem == 1)
        {cout << "false";
            return 0 ; 
        }

        if (n == 1){cout << i ;
        return 0;}
    }

}