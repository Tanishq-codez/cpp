#include<iostream>
using namespace std ;
// pass the reference variable
void update (int &x){
    x++;

}
int main (){
    

    int n = 5 ;
    update(n);
    cout << n ;
}