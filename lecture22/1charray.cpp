#include<iostream>
#include<cstring>  // to use fnc of string like strlen()
using namespace std ;
int main (){
    // string is basically character array in 1d 
    char c = 'a';// single quote for single charcter

    char str[]="hey";// double for string 
    char strn[10];
    cin>> strn; // cin dont take value after space/tab
    strn[2]='\0'; // execution stops after 2 characters
    cout<< strn <<endl ;
    
    // to count string length
    //strlen!=size of array, its chars before /0
    cout<< strlen(str);// the c in cpp way     
    // or use loop till  \0 
    return 0;
}