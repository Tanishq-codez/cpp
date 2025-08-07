// 4 important pillars of oops
// enscapsulation , inheritance , polymorphism , abstractions

// enscapsulation :wrapping up data members and fnc
// can be used for data hiding
//  can make class read only ; ony getter no setter4

// data member == properties == state
// function == methods == behaviours

#include <iostream>
using namespace std;
class student
{
    string name;
    int age;
    int height;

public:
    void setage(int a)
    {
        this->age = a;
    }
    int getage()
    {
        return this->age; // points to ag cvb nm,.e of object.eg-tanishq.getage()
    }
};

int main()
{
    student tanishq;
    // tanishq.setage(19);
    cout << tanishq.getage();
}