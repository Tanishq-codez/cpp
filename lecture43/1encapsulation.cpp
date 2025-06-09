//4 importants pillars of oops
//enscapsulation , inheritance , polymorphism , abstractions

//enscapsulation :wrapping up data members and fnc
//can be used dor data heading

//data member == properties == state
//function == methods == behaviours

#include<iostream>
using namespace std ;
class student{
    string name ;
    int age ;
    int height ;

public:
int getage(){
    return this->age ; // points to age of object.eg-tanishq.getage()
}
};

int main (){
    student tanishq ;
    cout<< tanishq.getage();
}