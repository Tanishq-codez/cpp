//exit a loop using switch / no break --> use exit(0) in switch 
#include<bits/stdc++.h>
#include<cmath>
using namespace std ;
int main (void){
    int n = 1 ;
    while (1){
        switch (n)
       { case 1 : cout<<"1"; 
       
        exit(0) ;  //break use kiye bina 
        cout<<"hahahha"; // wont be called if exit 0 hits
        }
    return 0 ;
}
  
}