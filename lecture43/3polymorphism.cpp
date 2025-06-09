// literal meaning is existing in multiple forms
// ex - pitaji
// types - compile time polymorphism - fnc and operator overloading
// and runtime polymorphism 

//better watch this part from lecture again
#include<iostream>
using namespace std ;
class a {
    
    public:
    void sayHello(){
        cout<<"hello tansihq";
    }
// fnc overloading - same name ; different argument or diff. num of arguments
    public:
    void sayHello(string name){
        cout<<"hello"<<name<<endl;
    }

};
int main (){

}