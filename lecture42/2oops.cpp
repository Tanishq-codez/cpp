// getter and setter are fncs defined in class block
// called in main fnc;

#include<iostream>
using namespace std ;

class hero{
    private:  // access using getter/setter fxn
    int health;

    public:
    char level;

int gethealth(){  // yeh bhi public rkhna
    return health ;
}

char getlevel(){
    return level ;
}
// setter-->can also be used to add exculive access
void sethealth(int h){  
    health= h;
}

void setlevel(char ch){
    level= ch ;
}
}; 


int main(){
    hero tanishq;
    tanishq.sethealth(69);
    cout<<tanishq.gethealth();

}
//why class with 1 int and 1 char has size!=5 but equals 8 

//padding(#removable)-Even though char takes 1 byte and int 
//takes 4 bytes, the total size of the class 
//might be 8 bytes instead of 5 bytes due to padding.
//The compiler adds extra bytes to align int properly for CPU.

//greedy alignment- the compiler may align all members to the largest data type 
// eg - in case of char ,int , double 8+8+8=24 bytes
// ; this stategy is greedy alignment and the extra bytes are padding

