//object oriented programming paradigm involve coding around an object
//the real world object has its own properties and state
// class is a user defined data type (somewhat like stuctures)

//access modifier == scope of class
//{public:class ke bahar+andar, private(default):sirf andar ,protected: ?child class}
#include<iostream>
//#include<Hero.cpp> - if u created a class in another file of the same name
using namespace std ;

class Hero{
    //properties
    public:    // neeche waale saare public
    int health;
    char level;
    
};  //****semicolon****
int main(){
      Hero ramesh ; // creation of an object ;
      ramesh.health=70;
      ramesh.level='A';
      // (.)dot operator is used to access a particlar property

    cout<<"health is "<<ramesh.health<<endl ;

      cout<<sizeof(ramesh); //size of object =sum of properties
      // size of empty class is 1 byte(for keeping track in memory)
      }
