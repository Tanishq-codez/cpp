// input 123 --->output one two three
#include<iostream>
using namespace std ;
void say(int n){
    
    if(n==0) return ;
    string arr[10]={"zero","one","two","three","four"
        ,"five","six","seven","eight","nine"};
    int digit = n % 10 ;
    n=n/10 ;
    say(n);
    cout<<arr[digit]<<" ";
}
int main (){
   
    int n ;
    cin >> n ;
    say(n);

}