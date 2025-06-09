#include<iostream>
#include<cmath>
using namespace std ;
int main (void)
{
    int n ;
    cout <<"enter value of n ";
    cin >> n ;
    int i = 2 ;
while(i){
    switch (n)
    {
    case 1:
        cout<<"lol";
    break; // exiting switch not loop;

    case 3: 
    cout <<"haha lol again";
    break ;
    
    default:
        cout<< "no lol" ;
     break;}  
    i--; }
    
    return 0 ;
}