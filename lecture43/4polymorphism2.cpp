// operator overloading-> + se kuch naya kaam karvana instead of addition or string concateation
// 4 that operators cant be overloaded  ?
#include<iostream>
class B{ 
    public:
    int a ;
    int b ;

    int add (){
        return a+b ;
    }
    void operator + (B &num)
{   int value1 = this -> a ;
    int value2 = num.a ;
    cout <<  "output" << value2-value1;
}
};
using namespace std ;
int main (){

    B num;
    num.a = 1;
    num.b = 2;
    cout<<num.add()<<endl;


}