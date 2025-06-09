// behind the scenes

// object created --> constructer called

// default constructer : ramesh.hero() 

//no return type or input parameter(default);


#include<iostream>
using namespace std ;
class hero {
    public:
    int health;
    char *name; //dynamic  allocation

    //custom constructor
    hero(){
        cout<<"constructor"<<endl;
        name = new char[100];}
    
    // parametrized constructor
    hero(int health){
    cout<<"this "<<this<<endl;
    this -> health = health; // health of line16(health of ramesh)= line21(jo input mein aayi hai)
                             // use of "this" keyword : store address of the nearest class ;
    }                        // agar "this" keyword ka use nahi karte to input parameter mein input parameter hi dal jata == no net change
};
int main (){


   hero ramlal(10) ;//same
   cout<<"address of ramlal "<<& ramlal<<endl ;//same
   
   hero(10); //differ 
}