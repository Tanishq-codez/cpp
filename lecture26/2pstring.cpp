#include<iostream>
using namespace std ;
int main(){
    char str[20]="heyboi";
    cout<<str<<endl; //doesnot print & of str[0] likr array but start printing from there upto /0
    // dont do >> char *c = "heyboi"
    // array(address of 1st block)<-->string(output of 1st block upto /0)

    char temp = 'z';
    char *p = &temp;
    cout<< p ;  // &temp address se printing shuru upto \0


}