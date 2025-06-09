// shallow and deep copy

#include <iostream>
#include <cstring> // for functons
                   // <string> for stl fnc
using namespace std;
class hero
{
private: // access using getter/setter fxn
    int health;

public:
    char level;
    char *name; // name[100] not good (allocates in stck)
    static int time;    // independent so use static keyword
                // it belong to class not a particular object
    hero()
    {
        cout << "default constructor called";
        name = new char[100]; // dynamic allocation to heap
    }

    //  paramertized
    // hero(int health, char level)
    // {
    //     this->level = level;
    //     this->health = health;
    // }

    // khudka copy deep constructor
    hero(hero &temp)
    { /*pass by refernce to avoid infi loop*/
        char *ch = new char[strlen(temp.name)+1];
        strcpy (ch , temp.name); 
        this->name = ch;
        this->health = temp.health;
        this->level = temp.level;
    }

    int gethealth()
    {
        return health;
    }

    char getlevel()
    {
        return level;
    }

    void sethealth(int h)
    {
        health = h;
    }

    void setlevel(char ch)
    {
        level = ch;
    }

    void setname(char name[])
    {
        strcpy(this->name, name);
    }

    void print()
    {
        cout << this->health << endl
             << this->level << this->name;
       
    }

    // custom destructor
    ~hero(){
        cout<<" destructor called" ;
    }
   
};
int main()
{
    // hero suresh(69, 'C'); //      suresh.sethealth(70);
    //                       //      suresh.setlevel('C');

    // // calling copying constructor
    // hero ramukaka(suresh);
    // ramukaka.print();

    // // default copy contructor -> shallow copy

    hero hero1;

    hero1.sethealth(12);
    hero1.setlevel('D');
    char name[7] = "babbar";
    hero1.setname(name);

    hero1.print();

    hero hero2(hero1);
    // created copy constructor for deep copy

    // hero2 already initialized 
    // copy assignment operator hero2=hero1;


     // destructor automatically called for static objects
    // but for dynamic objects "delete _name_";


    //hw 'constant' keyword use in object creation , function , data members
    // initiallization list


}