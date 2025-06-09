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
    
    (*papa).sethealth(69); 
    cout<<"health is "<<(*papa).gethealth();

    //alternate
    cout<<"alternate way "<< papa->gethealth(); //arrow operator , pointer waali baatcheet

}

