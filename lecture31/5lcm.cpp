#include<iostream>
using namespace std ;

int lcm ( int a , int b ,int n ){
     if(min(a,b)*n % max(a,b)==0)
     return min(a,b)*n;

     else return lcm(a,b,n+1);
}
int main(){
    cout<<lcm(7,5,1);
}


// NON BRUTEFORCE  approach using gdc
// #include<iostream>
// using namespace std;

// // Recursive GCD function
// int gcd(int a, int b) {
//     return (b == 0) ? a : gcd(b, a % b);
// }

// // LCM using the GCD formula
// int lcm(int a, int b) {
//     return (a * b) / gcd(a, b);
// }

// int main() {
//     int a = 7, b = 5;
//     cout << "LCM of " << a << " and " << b << " is " << lcm(a, b) << endl;
//     return 0;
// }