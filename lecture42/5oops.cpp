// shallow and deep copy
// shallow copy : name ka pointer pass kr diya
// deep coppy : nayi memory allocate krke , stringcopy krdiya

#include <iostream>
#include <cstring>
using namespace std;
class hero
{
public:
    int health;
    char level;
    // use string for automatic deep copy ;
    char *name;      // name[100] not good  (allocates in stack)
    static int time; // independent so use static keyword
                     // it belong to class not a particular object
    hero()
    {
        cout << "default constructor called";
        name = new char[100]; // dynamic allocation to heap
    }

    // paramertized
    hero(int health, char level)
    {
        this->level = level;
        this->health = health;
    }

    // khudka copy deep constructor
    hero(hero &temp)
    { /*pass by refernce to avoid infi loop of calling copy constructor*/

        // nayi memory allocate karayi
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;
        this->health = temp.health;
        this->level = temp.level;
    }

    void setname(char name[])
    {
        this->name = name;
    }

    void print()
    {
        cout << this->health << endl
             << this->level << endl
             << this->name << endl;
    }

    // custom destructor
    ~hero()
    {
        cout << " destructor called";
    }
};

// datatype class_name <scope reso operator > feild name = value
int hero ::time = 5; // syntax

int main()
{   // can be accessed without creation of object and common for all ;
    cout << hero::time; // syntax

    hero suresh(69, 'C'); //      suresh.sethealth(70);
                          //      suresh.setlevel('C');

    // calling copying constructor
    hero ramukaka(suresh);
    ramukaka.print();

    // default copy contructor -> shallow copy

    hero hero1;

    hero1.health = 12;
    hero1.level = 'D';
    char name[7] = "babbar";
    hero1.setname(name);

    hero1.print();

    hero hero2(hero1); // same as hero hero2 = hero1;
    // created copy constructor for deep copy

    // OR in 2 steps :
    // hero2 already initialized
    // copy assignment operator hero2=hero1;

    // destructor automatically called for static objects like above heroes

    // but for dynamic objects "delete _name_";
    hero *tanishq = new hero(10, 'a'); // u can have default and parameterised constructor at the same time
    delete tanishq;

    // hw 'constant' keyword use in object creation , function , data members :
    // if any variable is "const" it cant be changed after initialization
    // if an object is const no data member can be changed after initialization
    // non cost obj cant call const func

    // static fnc can only access static data member
    // const fnc can access both const and non but cant alter value

    // initialization list : used to initialize const memebers(must be initalized as soon as object created)
    //     class MyClass {
    //     const int x;
    // public:
    //     MyClass(int val) : x(val) { } // x is initialized here
    // };
}