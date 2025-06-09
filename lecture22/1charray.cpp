#include<iostream>
#include<cstring>  // to use fnc of string like strlen()
using namespace std ;
int main (){
    // string is basically character array in 1d 
    char c = 'a';// single quote for single charcter

    char str[]="hey";
    char strn[10];
    cin>> strn; // cin dont take value after space/tab
    strn[2]='\0'; // execution stops after 2 characters
    cout<< strn ;
    
    // to count string length
    //strlen!=size of array, its chars before /0
    cout<< strlen(strn);// the c way     
    // or us loop till  \0 
    return 0;
}