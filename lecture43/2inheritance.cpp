//inheritance:class 'a' ki properties class 'b' ne inherit krli
//types : single level ; multilevel ; multiple ;heirarchial(parent for multi);
// hybrid(combi of more than 1 type)
#include<iostream>
using namespace std ;
class human{ // base class /parent class/super class
    public:
    int age ;
    int weight ;
    int height ;

    int getage(){
        return this -> age ; 
    }
    void setWeight(int w){
       this-> weight = w ;
    }
};

// if property is 'private' in base class , it will be NA 
// if 'public' then it is same as the access modifier of child class
// if 'protected' then it will be protected except in case of private (private in that case)


// protected is similar to private but can be assessed within the class itself also the child class can access it

class animal{
    public:
    string color;
    void speak();
};
class male:public human{ // child class // sub class
       public:
       string color ;

       void sleep(){
         cout<<"male sleeping" ;
       }
};

//multiple inheritance
class hybrid : public human , public animal {
   // funcs from both parent classes can be assessed
};

int main (){
   male mukesh ;
   cout<<mukesh.age ; 
}
//inheritance ambiguity --> scope resolution operator
//object name.class name::func name()
//mukesh.male::color
//mukesh.female::color