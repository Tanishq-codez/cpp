#include<iostream>
using namespace std ;

class hero{
    public:
    char level;

    private:
    int health;
    
    public:    // dyaan diyo thoda waqt badal diye jazbaat...
    void sethealth(int h){
       health=h;
    }
    int gethealth(){
        return health ;
    }

};

int main(){
    // static allocation
    hero tanishq ;

    // dynamic allocation
    hero *papa= new hero ; // 8 byte in heap
    // now *papa is a type hero ; papa is a pointer 
    (*papa).sethealth(69); 
    cout<<"health is "<<(*papa).gethealth();

    //alternate
    cout<<"alternate way "<< papa->gethealth(); //arrow operator , pointer waali baatcheet
    
    delete papa ; // dynamic memory can be freed anytime even when the program is runnning
}

