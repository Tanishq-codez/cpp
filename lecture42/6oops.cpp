//static keyword

#include<iostream>
using namespace std ;
class hero{
    public:
    int static comptime ; //can be called without creating an object
    int health ;
    static int random ()  // cannot use "this" keyword
    { return comptime ;} // can only access static variables
};

//initialize outside main;

int hero :: comptime = 20;
int main(){
  
    hero tanishq ;
    cout<<tanishq.comptime;// works but not recommended
    cout<<hero::comptime;  // recomened by use of scope resolution operator

    cout<< hero::random();}