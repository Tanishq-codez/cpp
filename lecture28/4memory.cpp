//heap(dynamic) vs stack(static)
#include<iostream>
using namespace std ;

int main (){
    // use "new" keyword for heap
    new char ; // returns address

    char *ch = new char ;  // 8static(ptr)+1dynamic(char) byte  
    
    

    new int[5];
    int *arr = new int [5];// 8(ptr)+20(int) byte
}
